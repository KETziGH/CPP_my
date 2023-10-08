#include <iostream>
using namespace std;

int main()
{
    int numb1,numb2,numb3,numb4;
    cout<<"Enter the digits:"<<endl;
    cin>>numb1 >>numb2 >>numb3 >>numb4;
    
   if((numb1>=65 && numb1<=90)||(numb1>=97 && numb1<=122))
    {
        cout<<numb1<<"-"<<char(numb1)<<endl;
        
    }else
    {
        cout<<numb1<<"-"<<"Invalid"<<endl;
    }
    if ((numb2>=65 && numb2<=90)||(numb2>=97 && numb2<=122))
    {
        cout<<numb2<<"-"<<char(numb2)<<endl;
        
    }else
    {
        cout<<numb2<<"-"<<"Invalid"<<endl;
    }
    if ((numb3>=65 && numb3<=90)||(numb3>=97 && numb3<=122))
    {
        cout<<numb3<<"-"<<char(numb3)<<endl;
        
    }else
    {
        cout<<numb3<<"-"<<"Invalid"<<endl;
    }
    if ((numb4>=65 && numb4<=90)||(numb4>=97 && numb4<=122))
    {
        cout<<numb4<<"-"<<char(numb4)<<endl;
    }else
    {
        cout<<numb4<<"-"<<"Invalid"<<endl;
    }
    return 0; 
}