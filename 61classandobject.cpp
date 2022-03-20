#include<iostream>
using namespace std;
class rect
{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {
        a=x; b=y;
    }
    void area()
    {
        int ar = a*b;
        cout<<"\nArea of Rectangle = "<<ar;
    }
}; //end of class

int main()
{
    rect r1,r2; //object defintion
    r1.setdata(5,10);
    cout<<"Rectangle 1";
    r1.area();
    r2.setdata(10,20);
    cout<<"\nRectangle 2";
    r2.area();    

return 0;
}