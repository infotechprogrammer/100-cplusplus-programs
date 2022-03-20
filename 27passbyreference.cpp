#include<iostream>
using namespace std;

int main()
{
    int a,b;
    void swap(int &,int &);
    cout<<"Enter two numbers"<<endl;
    cout<<"A = "; cin>>a;
    cout<<"B = "; cin>>b;
    cout<<"Value of A and B before calling function : A= "<<a<<"\tB = "<<b<<endl;
    swap(a,b);
    cout<<"Value of A and B after calling function : A= "<<a<<"\tB = "<<b<<endl;

return 0;
}

void swap(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
    cout<<"After modification in function : x = "<<x<<"\ty = "<<y<<endl;
}