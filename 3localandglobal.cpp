#include<iostream>
using namespace std;
int x=20;
int main()
{
    int x=10;
    cout<<"Local Variable = "<<x;
    cout<<"\nGlobal Variable = "<<::x; // To access global variable
return 0;
}