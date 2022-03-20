#include <iostream>
using namespace std;

class grandparent
{
protected:
    int base_data;
    public:
    void readgp()
    {
        cout<<"Enter data of grand parent :";
        cin>>base_data; 
    }
};

class parent1 : public virtual grandparent
{
protected:
    int parent1_data;
    public:
    void readp1()
    {
        cout<<"Enter data of parent 1 :";
        cin>>parent1_data; 
    }
};

class parent2 : virtual public grandparent
{
protected:
    int parent2_data;
    public:
    void readp2()
    {
        cout<<"Enter data of parent 2 :";
        cin>>parent2_data; 
    }
};

class child : public parent1, public parent2
{
    private:
    int sum;
    public:
    void add()
    {
        sum = base_data + parent1_data + parent2_data;
    }
    void show()
    {
        cout<<"Grandparent's data member = "<<base_data;
        cout<<"\nParent 1 and Parent 2 data member = "<<parent1_data<<"\t"<<parent2_data;
        cout<<"\nSum of all data = "<<sum;
    }
};

int main()
{
    child c1;
    c1.readgp();
    c1.readp1();
    c1.readp2();
    c1.add();
    c1.show();
    return 0;
}