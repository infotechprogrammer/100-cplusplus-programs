#include<iostream>
using namespace std;

int main()
{
    float *ptr; //declaring a pointer to float
    ptr = new float; //allocates memory
    *ptr=10.5;
    cout<<"Output after memory allocated using new operator: \n";
    cout<<*ptr;
    delete ptr;
    cout<<"\nNow memory deallocated using delete operator";
    cout<<*ptr;

return 0;
}