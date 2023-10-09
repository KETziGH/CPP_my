#include "Account.h"

string Account::getName()
{
    return this->name;
}
Account::Account(string name, int accountNo, float balance)
{
    this->accountNo=accountNo;
    this->name=name;
    this->balance=balance;   
}

Account::~Account()
{
}
