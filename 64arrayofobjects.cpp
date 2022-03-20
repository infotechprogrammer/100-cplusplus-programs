#include<iostream>
using namespace std;

class account
{
    int acc_no;
    char name[15];
    double balance;
    public:
    void input_data();
    void display_data();
};

void account::input_data()
{
    cout<<"Enter account number:\t"; cin>>acc_no;
    cout<<"Enter your name:\t"; cin>>name;
    cout<<"Enter Balance:\t"; cin>>balance; cout<<"\n";
}
void account::display_data()
{
    cout<<"Account Number:\t"; cout<<acc_no;
    cout<<"\nHolder Name:\t"; cout<<name;
    cout<<"\nAccount Balance: "; cout<<balance<<"\n\n";
}

int main()
{
    account acc[10]; //array of objects
    int n;
    cout<<"\nEnter number of account holders = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Account :"<<i+1<<"\n";
        acc[i].input_data();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Information of Account :"<<i+1<<"\n";
        acc[i].display_data();
    }

return 0;
}