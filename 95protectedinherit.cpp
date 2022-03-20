#include<iostream>
using namespace std;

class num
{
    protected:
    int x,y;
    public:
    void read()
    {
        cout<<"Enter two numbers = \n";
        cin>>x>>y;
    }
    void showxy()
    { cout<<"x = "<<x<<"\t y = "<<y; }
};

class result : public num
{
    private:
    int z;
    public:
    void add()
    {
        z=x+y; //Accessing base class protected data members
    }
    void showz()
    { cout<<"\t z = "<<z; }
};

int main()
{
    result r1;
    r1.read();
    r1.add();
    r1.showxy();
    r1.showz();
    //r1.x=10; generates error as base's protected member not accessible 

return 0;
}