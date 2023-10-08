#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter the String:" << endl;
    getline(cin, sentence);
    
    bool allWordsUppercase = true;  // Initialize a flag to assume all words are already uppercase
    bool isFirstChar = true;  // Initialize a flag to track the first character of each word
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {  // If a space is encountered, it means the next character is the start of a new word
            isFirstChar = true;
        } else if (isFirstChar) {  // If it's the first character of a word
            if (islower(sentence[i])) {  // If the character is lowercase
                allWordsUppercase = false;  // Set the flag to false, indicating not all words are uppercase
                sentence[i] = toupper(sentence[i]);  // Capitalize the character
            }
            isFirstChar = false;  // Reset the first character flag for the rest of the word
        } else {
            sentence[i] = tolower(sentence[i]);  // Convert non-first characters to lowercase
        }
    }
    
    if (allWordsUppercase) {
        cout << "First character in each word are already in uppercase" << endl;
    } else {
        cout << sentence << endl;  // Print the modified sentence
    }
    
    return 0;
}
