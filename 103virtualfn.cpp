#include<iostream>
using namespace std;

class base
{
    public:
    virtual void display()
    {cout<<"Base class display is called\n";}
};

class derv1: public base
{
    public:
    void display()
    {cout<<"Derv1's class display is called\n";}
};

class derv2: public base
{
    public:
    void display()
    {cout<<"Derv2's class display is called\n";}
};

int main()
{
    base *ptr; //pointer to base class
    base obj;
    ptr = &obj;
    ptr->display();
    derv1 d1;
    derv2 d2;
    ptr = &d1; //Address of d1 to base pointer
    ptr->display();
    ptr = &d2; //Address of d1 to base pointer
    ptr->display();

return 0;
}