#include<iostream>
using namespace std;

int main()
{
    void *p;
    int a=7;
    float b=12.5;
    p=&a; //assigning a pointer
    cout<<"a = "<<*((int*)p);
    p=&b;
    cout<<"\nb = "<<*((float*)p);

return 0;
}