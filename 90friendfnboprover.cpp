#include <iostream>
using namespace std;

class complex
{
private:
    double real, img;

public:
    complex()
    {
        real = img = 0;
    }
    void read()
    {
        cout << "\nEnter real and imaginary parts: " << endl;
        cin >> real >> img;
    }
    void show()
    {
        if (img > 0)
            cout << real << "+" << img << "i" << endl;
        else
            cout << real << img << "i" << endl;
    }
    friend complex operator+(complex, complex); // Declaration of ovepartor overloading function using friend function
};

complex operator+(complex cc1, complex cc2) // Overload operator function t
{
    complex temp;
    temp.real = cc1.real + cc2.real;
    temp.img = cc1.img + cc2.img;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    cout << "Enter complex number c1 :";
    c1.read();
    cout << "Enter complex number c2 :";
    c2.read();
    c3 = c1 + c2; //call to operator function +
    cout << "\nAfter adding :\n";
    c3.show();
    return 0;
}