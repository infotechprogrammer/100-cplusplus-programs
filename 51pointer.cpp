#include<iostream>
using namespace std;

int main()
{
    int i, *ptr;
    i=5;
    ptr = &i;
    cout<<"Value of i : "<<i;
    cout<<"\nAddress of i : "<<&i;
    cout<<"\nValue of ptr : "<<ptr;

return 0;
}