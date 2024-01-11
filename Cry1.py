def analyze_text_file(file_path):
    try:
        # Open the file in read mode
        with open(file_path, 'r') as file:
            # Read the entire content of the file
            content = file.read()

            # Count words
            word_count = len(content.split())

            # Count characters
            char_count = len(content)

            print(f"Word count: {word_count}")
            print(f"Character count: {char_count}")

            # Print ASCII values of each character
            print("ASCII values of characters:")
            for char in content:
                ascii_value = ord(char)
                print(f"{char}: {ascii_value}")

    except FileNotFoundError:
        print(f"File not found: {file_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example: Replace 'your_file.txt' with the path to your text file
file_path = 'input.txt'
analyze_text_file(file_path)
