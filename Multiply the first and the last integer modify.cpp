#include <iostream>
using namespace std;

int main()
{
    char number[20]; // assume most 20
    cout << "Enter the number" << endl;
    cin >> number;
    
    int length = 0;
    while (number[length] != '\0')
    {
        length++;
    }
    
    //check input string is empty or one character 
    if (length < 2)
    {
        cout << "Invalid input, please enter a number with minimum two digits" << endl;
        return 1; // exit with error code
    }
    
    int firstdigit = number[0] - '0'; // convert to integer
    int lastdigit = number[length - 1] - '0'; //convert to integer
    
    cout << "Result: " << firstdigit * lastdigit << endl;
    
    return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    string input;
    std::cout << "Enter the number: " << std::endl;
    std::cin >> input;
    
    if (input.length() >=1) {
        int firstDigit = input[0] - '0'; //convert character to an intiger
        int lastDigit = input[input.length() - 1] - '0';// convert character to an intiger
        int result = firstDigit * lastDigit;
        std::cout << result << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }
    
    return 0;
}
*/