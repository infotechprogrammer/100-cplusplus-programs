#include<iostream>
using namespace std;

class base1
{
    protected:
    int x;
    public:
    void readx()
    {
        cout<<"Enter value of X: ";
        cin>>x;
    }
    void showx()
    { cout<<"X = "<<x; }
};

class base2
{
    protected:
    int y;
    public:
    void ready()
    {
        cout<<"Enter value of Y: ";
        cin>>y;
    }
    void showy()
    { cout<<"\tY = "<<y; }
};

class der : public base1, public base2
{
    private:
    int z;
    public:
    void add()
    {
        z=x+y; //Accessing protected members of base classes
    }
    void showz()
    { cout<<"\tZ = "<<z; }
};
int main()
{
    der d1;
    d1.readx();
    d1.ready();
    d1.add();
    d1.showx();
    d1.showy();
    d1.showz();

return 0;
}