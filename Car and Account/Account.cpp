#include "Account.h"

string Account::getName()
{
    return this->name;
}

Account::Account(string name,int accountNo, float balance)
{
    this->name=name;
    this->accountNo=accountNo;
    this->balance=balance;
}

Account::~Account()
{
    
}