import os
import re
from flair.data import Sentence
from flair.models import SequenceTagger

# Load the Flair NER model
tagger = SequenceTagger.load("ner")

# Define the directories
input_directory = 'TextData'
sensitive_info_directory = 'ListSenC'

# Ensure output directories exist
os.makedirs(sensitive_info_directory, exist_ok=True)

# Function to detect sensitive information using regex and Flair NER
def detect_sensitive_info(text):
    sensitive_info = []
    
    # Regex pattern for email addresses and long alphanumeric strings (e.g., student IDs)
    generic_pattern = re.compile(r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b|\b[A-Za-z0-9]{8,}\b')
    
    # Create a sentence object for Flair
    sentence = Sentence(text)
    
    # Use Flair to tag the sentence
    tagger.predict(sentence)
    
    # Extract entities
    entities = [entity.text for entity in sentence.get_spans('ner') if entity.tag in ["PER", "ORG", "LOC", "MISC"]]
    
    # Combine regex matches and Flair NER entities
    matches = generic_pattern.findall(text) + entities

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
