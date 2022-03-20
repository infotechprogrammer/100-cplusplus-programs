#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length,bredth;
    public:
    rectangle() 
    {
        length=bredth=0;
        cout<<"Constructor with zero parameter called";
    }
    rectangle(int a) 
    {
        length=bredth=a;
        cout<<"\nConstructor with one parameter called"; //Constructore Overloaded
    }
    rectangle(int a, int b) 
    {
        length=a; bredth=b;
        cout<<"\nConstructor with two parameter called"; //Constructore Overloaded
    }
    int area()
    {
        return(length*bredth);
    }
};

int main()
{
    rectangle r1; //Constructor with zero parameter called
    cout<<"\nArea of 1st Rectangle = "<<r1.area();
    rectangle r2(5); //Constructor with one parameter called
    cout<<"\nArea of Square = "<<r2.area();
    rectangle r3(5,6); //Constructor with two parameter called
    cout<<"\nArea of 2nd Rectangle = "<<r3.area();

return 0;
}