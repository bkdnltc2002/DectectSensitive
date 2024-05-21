import os
import re
import spacy

# Load the spaCy model for Named Entity Recognition (NER)
nlp = spacy.load("en_core_web_sm")

# Define the directories
input_directory = 'SampleData'
anonymized_directory = 'Anonymized'
sensitive_info_directory = 'Sensitive_Info'

# Ensure output directories exist
os.makedirs(anonymized_directory, exist_ok=True)
os.makedirs(sensitive_info_directory, exist_ok=True)

# Define regular expressions for different types of comments in various languages
single_line_comment_pattern = re.compile(r'//.*?$|#.*?$|--.*?$', re.MULTILINE)
multi_line_comment_pattern = re.compile(r'/\*.*?\*/|<!--.*?-->|\'\'\'.*?\'\'\'|""".*?"""', re.DOTALL)

# Function to extract comments
def extract_comments(text):
    comments = multi_line_comment_pattern.findall(text) + single_line_comment_pattern.findall(text)
    return comments

# Function to detect and replace sensitive information using regex and NLP
def detect_and_replace_sensitive_info(text):
    sensitive_info = []
    
    # Regex pattern for email addresses and long alphanumeric strings (e.g., student IDs)
    generic_pattern = re.compile(r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b|\b[A-Za-z0-9]{8,}\b')
    
    doc = nlp(text)
    matches = generic_pattern.findall(text) + [ent.text for ent in doc.ents if ent.label_ in ["PERSON", "ORG", "GPE", "LOC"]]

    # Sort matches by their position in the text to maintain order
    matches = sorted(set(matches), key=lambda x: text.find(x))

    for match in matches:
        if not any(match in info for info in sensitive_info):
            sensitive_info.append(match)
            text = text.replace(match, '[REMOVED]', 1)

    return text, sensitive_info

# Process each file in the directory
for filename in os.listdir(input_directory):
    if filename.endswith(('.py', '.java', '.cpp', '.c', '.js', '.html', '.css', '.php', '.rb', '.go', '.rs')):  # Process only code files
        filepath = os.path.join(input_directory, filename)
        with open(filepath, 'r') as file:
            content = file.read()

        # Extract comments
        comments = extract_comments(content)
        
        # Detect and replace sensitive information within comments
        sensitive_info = []
        anonymized_comments = []
        for comment in comments:
            original_comment = comment
            anonymized_comment, detected_info = detect_and_replace_sensitive_info(comment)
            sensitive_info.extend(detected_info)
            anonymized_comments.append((original_comment, anonymized_comment))
            content = content.replace(original_comment, anonymized_comment)

        # Save the anonymized content as a text file
        anonymized_filepath = os.path.join(anonymized_directory, f"{filename}.txt")
        with open(anonymized_filepath, 'w') as file:
            file.write(content)

        # Save the sensitive information in order, avoiding duplicates
        sensitive_info_filepath = os.path.join(sensitive_info_directory, f"{filename}_sensitive_info.txt")
        with open(sensitive_info_filepath, 'w') as file:
            for info in sorted(set(sensitive_info), key=sensitive_info.index):
                file.write(f"{info}\n")

        print(f'Processed file: {filename}')
