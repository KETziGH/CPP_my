#include "Car.h"
#include "Account.h"
#define sizeofArray 5

int main()
{
    Car* Mylist = static_cast <Car*> (malloc(sizeofArray*sizeof(Car)));

    for (int i = 0; i < sizeofArray; i++)
    {
        new(&Mylist[i])Car();
        cout << "Enter the car model No " << (i+1) << endl;
        getline(cin,Mylist[i].model);
        Mylist[i].printDetails();   
    }

    Car* Changelist = static_cast<Car*>(realloc(Mylist,10*sizeof(Car)));

    for (int i = 5; i< 10; i++)
    {
        new(&Changelist[i])Car();
        cout << "Enter the car model No " << (i+1) << endl;
        getline(cin,Changelist[i].model);
        Changelist[i].printDetails();
    }

    free (Mylist);

    Account* a1= new Account("Kushan", 001, 50200);
    Account a2("Ket", 002, 45250.00);

    cout <<a1->getName() << endl;
    cout << a2.getName() << endl;

    delete (a1);

    // Car* c1 = new Car();
    // c1->model="m3";
    // c1->printDetails();
    // delete (c1);


    // Car Mylist[5];
    // int sizeofArray = sizeof(Mylist)/sizeof(Car);

    // for (int i = 0; i < sizeofArray; i++)
    // {
    //     cout << "Enter the car model No " << (i+1) << endl;
    //     getline(cin,Mylist[i].model);
    //     Mylist[i].printDetails();
    // }

    return 0;
}