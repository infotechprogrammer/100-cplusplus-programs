#include<iostream>
using namespace std;

int main()
{
    int x=5,y=6,z;
    int add(int,int);
    int(*ptr) (int,int);
    ptr=add;
    z=(*ptr)(x,y);
    cout<<"Result on addition = "<<z;

return 0;
}
int add(int x, int z)
{
    return(x+z);
}