//You can see the use of break statement also here
#include<iostream>
using namespace std;

int main()
{
    long long int a,b,operation;
    cout<<"Enter two numbers :"<<endl;;
    cin>>a>>b;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"Select appropriate number for appropriate operation :"<<endl; 
    int choice;    
    cin>>choice;
    switch(choice)
    {
        case 1: 
        operation=a+b;
        cout<<" Addition = "<<operation;
        break;
        case 2: 
        operation=a-b;
        cout<<" Subtraction = "<<operation;
        break;
        case 3: 
        operation=a*b;
        cout<<" Multiplication = "<<operation;
        break;
        case 4: 
        operation=a/b;
        cout<<" Division = "<<operation;
        break;
        case 5: 
        operation=a%b;
        cout<<" Modulus = "<<operation;
        break;
        default:
        cout<<"Invalid Choice";
    }   

return 0;
}