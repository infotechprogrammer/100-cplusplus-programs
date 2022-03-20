#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length,bredth;
    public:
    rectangle() //default constructor defination
    {
        length = 5;
        bredth = 7;
    }
    int area()
    {
        return(length*bredth);
    }
};

int main()
{
    rectangle r1;
    cout<<"Area of Rectangle = "<<r1.area();

return 0;
}