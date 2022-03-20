#include<iostream>
using namespace std;

class shape
{
    protected:
    float a,b;
    public:
    void read() { cin>>a>>b; }
    virtual void cal_area()
    { cout<<"Virtual function"; }
};

class rectangle : public shape
{
    public:
    void cal_area()
    {
        float area = a*b;
        cout<<"\nArea of rectangle = "<<area;
    }
};

class triangle : public shape
{
    public:
    void cal_area()
    {
        float area = (a*b)/2;
        cout<<"\nArea of triangle = "<<area;
    }
};

int main()
{
    shape *ptr;
    rectangle r1;
    cout<<"Enter length and bredth of rectangle ";
    r1.read();
    ptr = &r1;
    ptr->cal_area();
    triangle t1;
    cout<<"\nEnter base and perpendicluar of triangle ";
    t1.read();
    ptr = &t1;
    ptr->cal_area();

return 0;
}