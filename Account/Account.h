#include "libraries.h"
class Account
{
    private:
        string name;
        int accountNo;
        float balance;
        float ratelist[5]; // array
        float *ratelist2; //malloc

    public:
        void setName(string name);
        string getName();
        Account(string name, int accountNo, float balance);
        ~Account();
};