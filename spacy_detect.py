import os
import re
import spacy

# Load the spaCy model for Named Entity Recognition (NER)
nlp = spacy.load("en_core_web_trf")

# Define the directories
input_directory = 'TextData'
sensitive_info_directory = 'ListSen'

# Ensure output directories exist
os.makedirs(sensitive_info_directory, exist_ok=True)

# Function to detect sensitive information using regex and NLP
def detect_sensitive_info(text):
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

    return sensitive_info

# Process each file in the directory
for filename in os.listdir(input_directory):
    if filename.endswith('.txt'):  # Process only text files
        filepath = os.path.join(input_directory, filename)
        with open(filepath, 'r') as file:
            content = file.read()

        # Detect sensitive information within the content
        sensitive_info = detect_sensitive_info(content)

        # Save the sensitive information in order, avoiding duplicates
        sensitive_info_filepath = os.path.join(sensitive_info_directory, f"{filename}_sensitive_info.txt")
        with open(sensitive_info_filepath, 'w') as file:
            for info in sorted(set(sensitive_info), key=sensitive_info.index):
                file.write(f"{info}\n")

        print(f'Processed file: {filename}')
