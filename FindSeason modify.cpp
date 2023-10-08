#include<iostream>
using namespace std;

int main()
{
    int month;
    cout<<"Enter the month:";
    cin>> month;
    
    string season;
    if(month<1 || month>12)
    {
        cout<<"Invalid month"<<endl;
    }else
    {
        if(month>=3 && month<=5)
        {
            season="Spring";
        }else if(month>=6 && month<=8)
        {
            season="Summer";
        }else if(month>=9 && month<=11)
        {
            season="Autumn";
        }else
        {
            season="Winter";
        }
        cout<<"Season:"<<season<<endl;
    }
    
    return 0;
}

/*
#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    int month;
    
    std::cout << "Enter the month" << std::endl;
    std::cin >> month;
    
    if (month >= 1 && month <= 12)
    {
        if (month >= 3 && month <= 5)
        {
            std::cout << "Season:Spring" << std::endl;
        }else if (month >= 6 && month <= 8)
        {
            std::cout << "Season:Summer" << std::endl;
        }else if (month >= 9 && month <= 11)
        {
            std::cout << "Season:Autumn" << std::endl;
        }else
        {
            std::cout << "Season:Winter" << std::endl;
        }
    } else
    {
        std::cout << "Invalid month" << std::endl;
    }
    return 0;
}   */