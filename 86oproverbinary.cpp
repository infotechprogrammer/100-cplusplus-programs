#include<iostream>
using namespace std;

class complex
{
    private:
    double real,img;
    public:
    complex()
    { real=img=0; }
    void read()
    {
        cout<<"\nEnter real and imaginary parts: "<<endl;
        cin>>real>>img;
    }
    complex operator +(complex cc2) // Overload operator function t
    {
        complex temp;
        temp.real = real + cc2.real;
        temp.img = img + cc2.img;
        return temp;
    }
    complex operator -(complex cc2) // Overload operator function t
    {
        complex temp;
        temp.real = real - cc2.real;
        temp.img = img - cc2.img;
        return temp;
    }
    void show()
    {
        if(img>0)
        cout<<real<<"+"<<img<<"i"<<endl;
        else
        cout<<real<<img<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3,c4;
    cout<<"Enter complex number c1 :";
    c1.read();
    cout<<"Enter complex number c2 :";
    c2.read();
    c3 = c1 + c2; //call to operator function +
    c4 = c1 - c2; //call to operator function -
    cout<<"\nAfter adding :\n";
    c3.show();
    cout<<"After subtracting :\n";
    c4.show();

return 0;
}