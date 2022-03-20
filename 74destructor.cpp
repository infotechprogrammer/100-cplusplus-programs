#include<iostream>
using namespace std;

class counter
{
private:
    int id;
public:
    counter(int);
    ~counter();
};

counter::counter(int i)
{
    id = i;
    cout<<"\n Costuctor of object with id "<<id<<"runs";
}
counter::~counter()
{
    cout<<"\n Object with id "<<id<<" destroyed";
}

int main()
{
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout<<"\n End of Main";

return 0;
}