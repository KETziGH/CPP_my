#include "Car.h"
#define SizeArray 5
int main()
{   
    Car* list=static_cast<Car*>(malloc(SizeArray*sizeof(Car))); //arry make in heap and need static casting for balance both sides
    int NewArraySize = SizeArray;
    int elementsAdded = 0;
    char choice='y';

    do
    {
        if (elementsAdded == 0)
        {
            for(int i = 0; i < NewArraySize; i++)
            {
                new(&list[i])Car();                     //save in memory address
                cout << "Enter the Car Model for car No " << (i+1) << endl;
                getline(cin,list[i].model);
                list[i].printDetails();
                elementsAdded++;
            }
        }else{
             for(int i = elementsAdded - 1; i < NewArraySize; i++)
            {
                new(&list[i])Car();                     //save in memory address
                cout << "Enter the Car Model for car No " << (i+1) << endl;
                getline(cin,list[i].model);
                list[i].printDetails();
                elementsAdded++;
            }

        }
        cout << "Array is full, Do you want to double the size? (y/n)" << endl;
        cin >> choice;
        if (choice == 'y')
        {
            NewArraySize*=2;
            list=static_cast<Car*>(realloc(list,NewArraySize*sizeof(Car)));
        }

    } while (choice=='y');

    delete list;

    // Car* changelist=static_cast<Car*>(realloc(list,10*sizeof(Car))); //reallocation in heap

    // for(int i=0; i < 10; i++)
    // {
    //     new(&changelist[i])Car();                     //save in memory address
    //     cout << "Enter the Car Model" << endl;
    //     getline(cin,changelist[i].model);
    //     changelist[i].printDetails();
    // }

    // delete changelist;

    // Car carlist[5];

    // Car *c1 = new Car();
    // c1->model="BMW M3";
    // c1->printDetails();
    //delete (c1);

    // carlist[0].model="BMW M3";
    // carlist[0].printDetails();

    // carlist[1].model="GTR";
    // carlist[1].printDetails();
    
    // carlist[2].model="520d";
    // carlist[2].printDetails();
 
    // for(int i=0 ;i<sizeof(carlist)/sizeof(Car);i++) //sizeof(carlist)/sizeof(Car) used to get lenth of array
    // {
    //     cout<<"Enter the Model Name"<<endl;
    //     // cin>>carlist[i].model;  ?? only get one word, not sentebce
    //     getline(cin,carlist[i].model); //to get sentence
    //     carlist[i].printDetails();
    // }

    
    return 0;
}