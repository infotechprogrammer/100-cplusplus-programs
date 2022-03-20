#include<iostream>
using namespace std;

class account
{
    private:
    int acc_no;
    double balance;
    static double rate; //declaring static data member
    public:
    void read()
    {
        cout<<"Enter account number and balance :\n";
        cin>>acc_no>>balance;
    }
    void show()
    {
        cout<<"\nAccount Number = "<<acc_no;
        cout<<"\nInterest = "<<rate;
        cout<<"\nBalance = "<<balance;
    }
    void qtr_rate_cal()
    {
        double interest = (balance*rate*0.25)/100;
        balance = balance + interest;
    }
    static void modify_rate(double incr) //defininn static member function
    {
        rate = rate + incr; //modifying rate
        cout<<"Modified rate of interest = "<<rate;
    }
};
double account::rate=0.05; // Initializing/Defining static data member

int main()
{
    account a1,a2;
    a1.read();
    a2.read();
    account::modify_rate(0.01); //calling static mem function
    a1.qtr_rate_cal();
    a2.qtr_rate_cal();
    a1.show();
    a2.show();

return 0;
}