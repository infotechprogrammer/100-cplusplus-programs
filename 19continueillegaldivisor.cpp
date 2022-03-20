#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    do{
        cout<<"Enter Divident"<<endl;
        cin>>a;
        cout<<"Enter Divisor"<<endl;
        cin>>b;
        if(b==0)
        {
            cout<<"Illegal Divisor"<<endl;
            continue;
        }
        cout<<"Quotient =\t"<<a/b<<endl;
        cout<<"Remainder =\t"<<a%b<<endl;
        cout<<"Want to Continue ? (y/n):";
        cin>>ch;
    } while(ch=='Y' || ch=='y');

return 0;
}