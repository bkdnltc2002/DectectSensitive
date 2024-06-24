import os
import re
from transformers import pipeline

# Load the Hugging Face NER pipeline
ner_pipeline = pipeline("ner", model="Davlan/distilbert-base-cased-finetuned-conll03-english")

# Define the directories
input_directory = 'TextData'
sensitive_info_directory = 'ListSenB'

# Ensure output directories exist
os.makedirs(sensitive_info_directory, exist_ok=True)

# Function to detect sensitive information using regex and Hugging Face NER
def detect_sensitive_info(text):
    sensitive_info = []

    # Regex pattern for email addresses and long alphanumeric strings (e.g., student IDs)
    generic_pattern = re.compile(r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b|\b[A-Za-z0-9]{8,}\b')

    # Process the text with Hugging Face NER pipeline
    ner_results = ner_pipeline(text)
    matches = generic_pattern.findall(text) + [result['word'] for result in ner_results if result['entity'] in ["PER", "ORG", "LOC"]]

    # Sort matches by their position in the text to maintain order
    matches = sorted(set(matches), key=lambda x: text.find(x))

    for match in matches:
        if not any(match in info for info in sensitive_info):
            sensitive_info.append(match)

    return sensitive_info

# Function to process a single file
def process_file(filename):
    filepath = os.path.join(input_directory, filename)
    sensitive_info = []

    with open(filepath, 'r') as file:
        for line in file:
            detected_info = detect_sensitive_info(line)
            sensitive_info.extend(detected_info)

    return sensitive_info

# Process each file in the directory and collect sensitive information
all_sensitive_info = []
for filename in os.listdir(input_directory):
    if filename.endswith('.txt'):  # Process only text files
        sensitive_info = process_file(filename)
        all_sensitive_info.extend(sensitive_info)
        print(f'Processed file: {filename}')

# Save all detected sensitive information into a single file
sensitive_info_filepath = os.path.join(sensitive_info_directory, "all_sensitive_info.txt")
with open(sensitive_info_filepath, 'w') as file:
    for info in sorted(set(all_sensitive_info), key=all_sensitive_info.index):
        file.write(f"{info}\n")

print(f'Saved all sensitive information to: {sensitive_info_filepath}')
