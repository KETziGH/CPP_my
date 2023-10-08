#include <iostream>
using namespace std;

int main()
{
    double rating,current_salary;
    cout<< "Enter the salary"<<endl;
    cin>>current_salary;
    cout<<"Enter the Performance appraisal rating"<<endl;
    cin>>rating;
    
    double final_salary;
    if(current_salary<=0 || rating<1 || rating>5)
    {
        cout<<"Invalid Input"<<endl;
    }else 
    {
        if(rating>=1 && rating<=3)
        {
            final_salary=current_salary*1.10;
        }else if(rating>=3.1 && rating<=4)
        {
            final_salary=current_salary*1.25;
        }else 
        {
            final_salary=current_salary*1.30;
        }
        cout<<final_salary<<endl;
    }
    return 0;
}

/*#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    double salary, apprasialRating;
    
    std::cout << "Enter the salary" << std::endl;
    std::cin >> salary;
    
    std::cout << "Enter the Perfomance appraisal rating" << std::endl;
    std::cin >> apprasialRating;
    
    if (salary <=0 || apprasialRating < 1 ||apprasialRating > 5)
    {
        std::cout << "Invalid Input" << std::endl;
    } else
    {
        double increment = 0;
        if (apprasialRating >=1 && apprasialRating <= 3)
        {
            increment = salary * 0.1;   
        } else if (apprasialRating > 3 && apprasialRating <=4)
        {
            increment = salary * 0.25;
        } else if (apprasialRating > 4 && apprasialRating <=5)
        {
            increment = salary * 0.3;
        }
        double incrementedSalary = salary + increment;
        cout << incrementedSalary << endl;
    }
    return 0;
} */
