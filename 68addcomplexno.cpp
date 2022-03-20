#include<iostream>
using namespace std;

class complex
{
    private:
    float real,imag;
    public:
    void read()
    {
        cout<<"Enter Real and Imaginary part of complex numbers \n";
        cin>>real>>imag;
    }
    void show()
    {
        if(imag>0)
        {
            cout<<real<<"+"<<imag<<"i"<<endl; //displaying number as a+bi (Made it complex)
        }
        else{
            cout<<real<<"-"<<imag<<"i"<<endl;  //displaying number as a+bi (Made it complex)
        }
    }
    void add(complex cc1, complex cc2)
    {
        real=cc1.real+cc2.real;
        imag=cc1.imag+cc2.imag;
    }
    void sub(complex cc1, complex cc2)
    {
        real=cc1.real-cc2.real;
        imag=cc1.imag-cc2.imag;
    }
    void mul(complex cc1, complex cc2)
    {
        real=cc1.real*cc2.real;
        imag=cc1.imag*cc2.imag;
    }
    void div(complex cc1, complex cc2)
    {
        real=cc1.real/cc2.real;
        imag=cc1.imag/cc2.imag;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.read(); //Input first complex number
    c2.read(); //Input second complex number   
    int choice;
    do
    {
        cout<<"\nVarious Complex Number operations are:"<<endl;
        cout<<"1. Add Operation"<<endl;
        cout<<"2. Subtract Operation"<<endl;
        cout<<"3. Multiply Operation"<<endl;
        cout<<"4. Divide Operation"<<endl;
        cout<<"5. Quit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: c3.add(c1,c2); c3.show(); break;
        case 2: c3.sub(c1,c2); c3.show(); break;
        case 3: c3.mul(c1,c2); c3.show(); break;
        case 4: c3.div(c1,c2); c3.show(); break;
        case 5: cout<<"Exiting from the program"; break;
        default: cout<<"Invalid Choice try again"<<endl;; break;
        }
    } while (choice!=5);
    

return 0;
}