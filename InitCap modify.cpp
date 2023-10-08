#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter the String:" << endl;
    getline(cin, sentence);
    
    bool allWordsUppercase = true;  // Initialize a flag to assume all First character in each word are already uppercase
    bool isFirstChar = true;  // Initialize a flag to track the first character of each word
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {  // If a space is encountered, it means the next character is the start of a new word
            isFirstChar = true;
        } else if (isFirstChar) {  // If it's the first character of a word
            if (islower(sentence[i])) {  // If the character is lowercase
                allWordsUppercase = false;  // Set the flag to false, indicating not all First character in each word are uppercase
                sentence[i] = toupper(sentence[i]);  // Capitalize the character
            }
            isFirstChar = false;  // Reset the first character flag for the rest of the word
        }
    }
    
    if (allWordsUppercase) {
        cout << "First character in each word are already in uppercase" << endl;
    } else {
        cout << sentence << endl;  // Print the modified sentence
    }
    
    return 0;
}



/* from optomizing the below code,
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter the String:" << endl;
    getline(cin, sentence);
    
    bool allWordsUppercase = true;
    bool isFirstChar = true;
    
    for (int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] == ' ')
            {
                isFirstChar = true;
            } else if (isFirstChar)
            {
                if(islower(sentence[i]))
                {
                    allWordsUppercase = false; 
                }
                isFirstChar = false;
            }
        }
    
    if (allWordsUppercase) {
        cout << "First character in each word are already in uppercase" << endl;
    } else {
            for (int i = 0; i < sentence.length(); i++) 
            {
                if (sentence[i] == ' ') {
                    isFirstChar = true;
                } else if (isFirstChar) {
                    if (islower(sentence[i])) {
                        sentence[i] = toupper(sentence[i]);
                    }
                    isFirstChar = false;
                }
            }
        cout << sentence << endl;
    }
    
    return 0;
}
*/