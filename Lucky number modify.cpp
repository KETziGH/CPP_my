#include <iostream>
using namespace std;

int main() {
    cout << "Enter your name: ";
    
    char name[100];  // Assuming the name won't exceed 100 characters
    cin >> name;
    
    // Initialize the lucky number to 0
    int luckyNumber = 0;
    
    // Define the table as a 2-D array
    char table[2][26] = {
        { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' },
        { 1, 2, 3, 4, 5, 8, 3, 5, 1, 1, 2, 3, 4, 5, 7, 8, 1, 2, 3, 4, 6, 6, 6, 5, 1, 7 }
    };
    
    // Calculate the length of the name
    int length = 0;
    while (name[length] != '\0') {
        length++;
    }

    // Check for invalid characters
    for (int i = 0; i < length; i++) {
      									//  char currentChar = toupper(name[i]); // if need to access lowercase latters too
        if (name[i] < 'A' || name[i] > 'Z') {				// need to raplace currentChar with name[i]
            cout << "Invalid name" << endl;
            return 0;
        }
    }
    
    // Calculate the lucky number
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 26; j++) {
            if ((name[i]) == table[0][j]) {       // replased toupper(name[i]) with (name[i])
                luckyNumber += table[1][j];
                break;
            }
        }
    }
    
    cout << "Your lucky number is: " << luckyNumber << endl;

    return 0;
}


/*

#include <iostream>
#include <string>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    char table[2][26] = {
        {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
        {1,2,3,4,5,8,3,5,1,1,2,3,4,5,7,8,1,2,3,4,6,6,6,5,1,7}
        };
        
    string name;
    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;
    
    bool validname = true;
    int luckyNumber = 0;
    
    for (char c : name) {
        if (c < 'A' || c > 'Z') {
            validname = false;
            break;
        }
        
        for (int i = 0; i < 26; i++) {
            if (table[0][i] == c) {
            luckyNumber +=  table[1][i];
            break;
            }
        }
    }
    
    if (validname){
        cout << "Your lucky number is " << luckyNumber << endl;
    } else {
        cout << "Invalid name" << endl;
    }
    
    return 0;
}  */