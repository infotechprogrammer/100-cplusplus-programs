#include<iostream>
using namespace std;

class yyy; //FOrward Declaration
class xxx
{
    private:
    int x;
    public:
    xxx(int xx)
    {
        x=xx;
    }
    void f1(yyy);
};
class yyy
{
    private:
    int y;
    public:
    yyy(int yy)
    {
        y=yy;
    }
    friend void xxx::f1(yyy obj);
};

void xxx::f1(yyy obj)
{
    cout<<"Difference = "<<x - obj.y;
}

int main()
{
    xxx obj1(15);
    yyy obj2(10);
    obj1.f1(obj2);   

return 0;
}