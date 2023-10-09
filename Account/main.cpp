#include "Account.h"
int main()
{
    Account *o1=new Account("calcey",256, 5000.2);

    Account o2("calcey2", 248, 58000.4);

    cout << o1->getName() << endl;
    cout << o2.getName() << endl;

    delete (o1);
    return 0; 
}