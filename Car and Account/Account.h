#include "libraries.h"

class Account
{
    private:
        string name;
        int accountNo;
        float balance;
        float ratelist[5];

    public:
        void setName(string name);
        string getName();
        Account(string name, int accounrNo, float balance);
        ~Account();
};