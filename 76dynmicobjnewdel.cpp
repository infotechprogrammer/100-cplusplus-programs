#include<iostream>
using namespace std;

class rectangle{
    private:
    int l,b;
    public:
    rectangle()
    { cout<<"Constructor with no parameter called"; }
    void read()
    {cout<<"\nEnter length and bredth = ";
    cin>>l>>b;
    }
    void area()
    { cout<<"\nArea of Rectangle = "<<l*b; }
    ~rectangle()
    { cout<<"\nDestructor Invoked"; }
};

int main()
{
    rectangle *ptr;
    ptr = new rectangle; //dynamic object created
    ptr->read();
    ptr->area();
    cout<<"\nDestroying object";
    delete ptr;
    cout<<"\nEnd of program";
return 0;
}