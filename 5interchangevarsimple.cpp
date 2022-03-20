#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the values for a and b = "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After interchanging "<<endl<<"a = "<<a<<" b = "<<b;

return 0;
}