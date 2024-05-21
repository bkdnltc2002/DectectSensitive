import os

# Define the directories
anonymized_directory = 'Anonymized'
sensitive_info_directory = 'Sensitive_Info'
result_directory = 'Result'

# Ensure the result directory exists
os.makedirs(result_directory, exist_ok=True)

# Function to restore sensitive information
def restore_sensitive_info(anonymized_content, sensitive_info):
    for info in sensitive_info:
        anonymized_content = anonymized_content.replace('[REMOVED]', info, 1)
    return anonymized_content

# Process each file in the anonymized directory
for filename in os.listdir(anonymized_directory):
    if filename.endswith('.txt'):  # Process only text files
        anonymized_filepath = os.path.join(anonymized_directory, filename)
        sensitive_info_filepath = os.path.join(sensitive_info_directory, f"{filename.replace('.txt', '')}_sensitive_info.txt")
        
        # Read the anonymized content
        with open(anonymized_filepath, 'r') as file:
            anonymized_content = file.read()
        
        # Read the sensitive information
        with open(sensitive_info_filepath, 'r') as file:
            sensitive_info = [line.strip() for line in file.readlines()]
        
        # Restore the sensitive information
        restored_content = restore_sensitive_info(anonymized_content, sensitive_info)
        
        # Save the restored content as a text file
        result_filepath = os.path.join(result_directory, filename)
        with open(result_filepath, 'w') as file:
            file.write(restored_content)
        
        print(f'Restored file: {filename}')