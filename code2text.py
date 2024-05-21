from pathlib import Path
import logging

# Configure logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

def convert_any_code_to_text(input_file, output_file):
    """
    Convert any code file to a text file while preserving the original structure and style.

    Parameters:
    input_file (str): The path to the input code file.
    output_file (str): The path to the output text file.
    """
    try:
        logging.info(f"Reading from: {input_file}")
        # Open the input file in read mode and read its content
        with open(input_file, 'r', encoding='utf-8') as file:
            code_content = file.read()
        
        logging.info(f"Writing to: {output_file}")
        # Open the output file in write mode and write the content
        with open(output_file, 'w', encoding='utf-8') as file:
            file.write(code_content)
        
        logging.info(f"Successfully converted {input_file} to {output_file}")
    except FileNotFoundError:
        logging.error(f"The file {input_file} does not exist.")
    except Exception as e:
        logging.error(f"An error occurred: {e}")

def convert_files_in_folder(input_folder, output_folder):
    """
    Convert all code files in a folder to text files while preserving the original structure and style.

    Parameters:
    input_folder (str): The path to the input folder containing code files.
    output_folder (str): The path to the output folder where text files will be saved.
    """
    input_folder = Path(input_folder)
    output_folder = Path(output_folder)

    if not output_folder.exists():
        output_folder.mkdir(parents=True, exist_ok=True)

    for input_file in input_folder.rglob('*'):
        if input_file.is_file():
            output_file = output_folder / f"{input_file.stem}.txt"
            convert_any_code_to_text(input_file, output_file)

# Example usage:
# Convert all code files in a folder to text files
input_folder_path = 'SampleData'  # input folder
output_folder_path = 'TextData'  # output folder

convert_files_in_folder(input_folder_path, output_folder_path)