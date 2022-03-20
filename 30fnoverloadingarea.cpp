//Fuunction Overloading same function name with different parameters
#include<math.h>
#include<iostream>
using namespace std;

void area(int);
void area(int,int);
void area(int,int,int);

int main()
{
    int side=10;
    int l=5,br=6;
    int a=4, b=4, c=6;
    area(side);
    area(l,br);
    area(a,b,c);
return 0;
}
void area(int x)
{
    cout<<"Area of Square = "<<x*x<<endl;
}
void area(int x, int y)
{
    cout<<"Area of Rectangle = "<<x*y<<endl;
}
void area(int x, int y, int z)
{
    float s = (x+y+z)/2;
    float ar;
    ar = sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"Area of Triangle using Heron's Formula = "<<ar<<endl;
}