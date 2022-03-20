#include<iostream>
using namespace std;

class counter
{
    int count; //by default private
    public:
    counter(int c) //single parameter constructor
    {
        count=c;
    }
    counter(counter &ob) //copy constructor
    {
        count=ob.count; //explain me the meaning of this line
        cout<<"\nCopy Constructor is Invoked";
    }
    void show()
    {
        cout<<"\nCount = "<<count;
    }
};

int main()
{
    counter c1(10);
    counter c2(c1);
    c1.show();
    c1.show();

return 0;
}