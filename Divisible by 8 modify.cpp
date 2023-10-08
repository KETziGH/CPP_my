#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Provide the number" << endl;
    cin >> number;
    
    int Last3digits[3];
    int temp = number;
    for (int i = 2; i >= 0; i--)
    {
        Last3digits[i] = temp % 10;
        temp /= 10; //temp = temp/10
    }
    
    cout << "Last three digits: ";
    
    for (int i = 0; i < 3; i++)
    {
        cout << Last3digits[i];
    }
    cout << endl;
    
    int Last3digitsValue = Last3digits[0] * 100 + Last3digits[1] * 10 + Last3digits[2];
    
    if (Last3digitsValue % 8 == 0)
    {
        cout << "Number is divisible by 8" << endl;
        return 0;
    }
    else
    {
        cout << "Number is not divisible by 8" << endl;
    }
    
    return 0;
}

/*
#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    int num;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    
    //get the last three digits
    int lastThree = num % 1000;
    
    cout << "Last three digits: " << lastThree << endl;
    
    if (lastThree % 8 == 0) {
        cout << "Number is divisible by 8" << endl;
    } else {
        cout << "Number is not divisible by 8" << endl;
    }
    return 0;
}
*/