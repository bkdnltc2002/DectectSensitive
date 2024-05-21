import re
import json
import os
from glob import glob
from transformers import BertTokenizer, BertForMaskedLM
import torch
import logging

# Configure logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

# Initialize the BERT model and tokenizer once
tokenizer = BertTokenizer.from_pretrained("bert-base-uncased")
model = BertForMaskedLM.from_pretrained("bert-base-uncased")

# Define a function to detect sensitive information using the BERT model
def detect_sensitive_info(comment):
    sensitive_info = {}
    
    # Define potential sensitive keywords to look for
    keywords = ["course", "semester", "lab assessment", "author", "id", "name", "compiler", "references"]
    
    for keyword in keywords:
        if keyword in comment.lower():
            # Extract the relevant part of the comment for the keyword, excluding the keyword itself
            keyword_info = re.search(rf'\b{keyword}\b\s*:\s*(.*?)(\.|;|,|\n)', comment, re.IGNORECASE)
            if keyword_info:
                info = keyword_info.group(1).strip()
                sensitive_info[keyword] = info
    
    # Truncate the comment to the maximum length allowed by the model
    max_length = tokenizer.model_max_length
    truncated_comment = comment[:max_length]
    
    # Use the model to detect other potential sensitive information
    masked_comment = truncated_comment.replace(" ", " [MASK] ")
    inputs = tokenizer(masked_comment, return_tensors="pt", truncation=True, max_length=max_length, padding='max_length')
    with torch.no_grad():
        outputs = model(**inputs)
    predictions = outputs.logits
    
    # Get the predicted tokens
    predicted_tokens = torch.argmax(predictions, dim=-1)
    predicted_tokens = tokenizer.convert_ids_to_tokens(predicted_tokens[0])
    
    for token in predicted_tokens:
        if token.lower() in keywords:
            # Extract the relevant part of the comment for the token, excluding the token itself
            token_info = re.search(rf'\b{token}\b\s*:\s*(.*?)(\.|;|,|\n)', comment, re.IGNORECASE)
            if token_info:
                info = token_info.group(1).strip()
                sensitive_info[token.lower()] = info
    
    return sensitive_info

# Function to read the text file and extract comments
def extract_comments(file_path):
    comments = []
    content = ""
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            content = file.read()
            # Extract comments enclosed within /* and */
            comments = re.findall(r'/\*(.*?)\*/', content, re.DOTALL)
    except FileNotFoundError:
        logging.error(f"The file {file_path} does not exist.")
    except Exception as e:
        logging.error(f"An error occurred while reading {file_path}: {e}")
    return comments, content

# Function to remove sensitive information from comments
def remove_sensitive_info(content, comments):
    cleaned_content = content
    sensitive_data = []
    
    for comment in comments:
        detected_info = detect_sensitive_info(comment)
        if detected_info:
            sensitive_data.append(detected_info)
            # Remove sensitive info from comment
            cleaned_comment = '/* [SENSITIVE INFORMATION REMOVED] */'
            cleaned_content = cleaned_content.replace(comment, cleaned_comment)
    
    return cleaned_content, sensitive_data

# Function to write sensitive information to a JSON file
def save_sensitive_info(file_path, sensitive_data, output_folder):
    base_name = os.path.basename(file_path)
    json_file_path = os.path.join(output_folder, f'{base_name}.sensitive.json')
    with open(json_file_path, 'w', encoding='utf-8') as json_file:
        json.dump(sensitive_data, json_file, indent=4)
    logging.info(f"Sensitive information saved to {json_file_path}")

# Main function to secure sensitive information
def secure_sensitive_info(file_path, anonymized_output_folder, sensitive_info_output_folder):
    comments, content = extract_comments(file_path)
    if not content:
        logging.warning(f"Skipping {file_path} as it could not be read or is empty.")
        return  # Skip processing if the file could not be read
    
    cleaned_content, sensitive_data = remove_sensitive_info(content, comments)
    
    # Save the cleaned content to a new file with the format anonymized_<original_filename>.txt
    base_name = os.path.basename(file_path)
    anonymized_file_path = os.path.join(anonymized_output_folder, f'anonymized_{base_name}')
    with open(anonymized_file_path, 'w', encoding='utf-8') as file:
        file.write(cleaned_content)
    
    save_sensitive_info(file_path, sensitive_data, sensitive_info_output_folder)
    logging.info(f"Cleaned file saved as {anonymized_file_path}")

# Function to process multiple files in a folder sequentially
def process_files_in_folder(input_folder, anonymized_output_folder, sensitive_info_output_folder):
    if not os.path.exists(anonymized_output_folder):
        os.makedirs(anonymized_output_folder)
    if not os.path.exists(sensitive_info_output_folder):
        os.makedirs(sensitive_info_output_folder)

    file_paths = glob(os.path.join(input_folder, '*'))
    
    for file_path in file_paths:
        try:
            secure_sensitive_info(file_path, anonymized_output_folder, sensitive_info_output_folder)
        except Exception as e:
            logging.error(f"An error occurred during file processing: {e}")

# Example usage
input_folder_path = 'TextData'  #  input folder
anonymized_output_folder_path = 'Anonymized'  #  anonymized output folder
sensitive_info_output_folder_path = 'Sensitive_Info'  #  sensitive info output folder

process_files_in_folder(input_folder_path, anonymized_output_folder_path, sensitive_info_output_folder_path)
