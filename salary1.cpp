#include <iostream>
//#include <cmath>
using namespace std;

int main()
{
    int annual_income,one_day_salary;
    int days_in_year=365;
    std::cout <<"Enter annual income(in dollar)="<< std::endl;
    std::cin >> annual_income;
    one_day_salary=annual_income/days_in_year;
    std::cout <<"one day salary(in dollar)="<<one_day_salary<< std::endl;
    return 0;
}