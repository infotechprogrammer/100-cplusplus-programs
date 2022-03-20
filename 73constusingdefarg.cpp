#include<iostream>
using namespace std;

class complex
{
    private:
    double real;
    double imag;
    public:
    complex(double=0.0,double=0.0);
    void add (complex , complex);
    void show();
};

complex::complex(double x, double y)
{
    real = x; imag = y;
}
void complex::add(complex c1, complex c2)
{
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}
void complex::show()
{
    if(imag>0){
        cout<<real<<"+"<<imag<<"i";
    }else{
        cout<<real<<imag<<"i";
    }
}

int main()
{
    complex c1(6,8);
    complex c2(5);
    complex c3;
    c3.add(c1,c2);
    c3.show();

return 0;
}