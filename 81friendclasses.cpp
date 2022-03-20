#include<iostream>
using namespace std;

class b;
class a
{
    private:
    int x,y;
    public:
    a(int xx, int yy)
    {
        x=xx; y=yy;
    }
    friend class b;
};

class b
{
    public:
    void f1(a objx)
    {
        cout<<"X = "<<objx.x;
    }
    void f2(a objy)
    {
        cout<<" Y = "<<objy.y;
    }
};

int main()
{
    a obj1(10,15);
    b obj2;
    obj2.f1(obj1);
    obj2.f2(obj1);

return 0;
}