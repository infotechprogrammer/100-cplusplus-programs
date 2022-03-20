#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length,bredth;
    public:
    rectangle(int a,int b) //default constructor defination
    {
        length=a; bredth=b;
    }
    int area()
    {
        return(length*bredth);
    }
};

int main()
{
    rectangle r1(5,6);
    rectangle r2(7,8);
    cout<<"Area of Rectangle = "<<r1.area();
    cout<<"\tArea of Rectangle = "<<r2.area();

return 0;
}