#include<iostream>
using namespace std;

class rectangle
{
    int a,b; //by deafault private
    public:
    void setdata(int,int); //member function declaration
    void area(); //member function declaration
};
void rectangle::setdata(int x,int y)
{
    a=x;
    b=y;    
}
void rectangle::area()
{
    int ar = a*b;
    cout<<"\nArea of Rectangle = "<<ar;    
}

int main()
{
    rectangle r1,r2; //object defintion
    r1.setdata(5,10);
    cout<<"Rectangle 1";
    r1.area();
    r2.setdata(10,20);
    cout<<"\nRectangle 2";
    r2.area();       

return 0;
}