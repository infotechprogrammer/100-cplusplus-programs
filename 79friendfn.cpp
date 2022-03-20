#include<iostream>
using namespace std;

class demo
{
    int x;
    public:
    demo(int xx)
    {
        x=xx;
    }
    friend void display(demo); // Friend Function Declaration
};

void display(demo dd1)
{
    cout<<dd1.x;
}

int main()
{
    demo d1(5);
    display(d1); // Friend Function Call

return 0;
}