def frequency_analysis(text):
    letter_count = [0] * 26
    total_letters = 0
    sqsum = 0

    # Count the frequency of each letter in the text
    for char in text:
        if char.isalpha():
            char = char.lower()
            letter_count[ord(char) - ord('a')] += 1
            total_letters += 1

    # Print the frequency analysis results
    print("Letter\tFrequency\tRelative Frequency\tSquares")
    print("--------------------------------------------------------------------")
    for i in range(26):
        letter = chr(ord('a') + i)
        frequency = letter_count[i]
        relative_frequency = (frequency / total_letters) * 100
        square = relative_frequency ** 2
        print(f"{letter}\t{frequency}\t\t{relative_frequency:.2f}%\t\t\t{square:.2f}%")
        sqsum += square
    print("--------------------------------------------------------------------")
    print("Sum of squares : ",sqsum)

if __name__ == "__main__":
    ciphertext = "ULE PSO ENG LII WREBR RHLSMEWE XHH DFXTHJ GVOP LII PRKU SFIADI"
    print("Frequency Analysis of the Ciphertext:")
    print("--------------------------------------------------------------------")
    print(ciphertext + "\n")
    frequency_analysis(ciphertext)
    
