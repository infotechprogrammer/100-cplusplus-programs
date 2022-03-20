#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number : "<<endl;
    cin>>a;
    cout<<"Enter second number : "<<endl;
    cin>>b;
    try
    {
        if(b!=0)
        {
            cout<<" Division = "<<a/b<<endl;
        }
        else
        {
            throw(b);
        }
    }    
        catch(int n)
        {
            cout<<"There is an exception division by 0 \n"<<"Second Number ="<<b;
        }  
}