#include<iostream>
#include<iomanip> //Required for these manipulators
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number = "; 
    cin>>i; // or cin>>hex>>i; to get hexadecimal input only
    cout<<"Hexadecimal value = "<<hex<<i<<endl; // 1.endl Manipulator:For next line
    cout<<"Octal value = "<<oct<<i<<endl;  // 2.hex,dec,oct for converting base to hexadecimal(16),octal(8),decimal(10)
    cout<<"Decimal value = "<<dec<<i<<endl;    
    cout<<"Enter hexadecimal number = "; 
    cin>>setbase(16)>>i; // 3.setbase(b) simailar to above toset base to hex, dec or oct
    cout<<setw(27)<<"Hexadecimal value = "<<setbase(16)<<i<<endl; //4.setw() used to set the width of chacters in program
    cout<<setw(27)<<"Octal value = "<<setbase(8)<<i<<endl;  
    cout<<setw(27)<<"Decimal value = "<<setbase(10)<<i<<endl; 
    int age=22,rollno=076;
    cout<<setfill('#');
    cout<<"Age"<<endl;
    cout<<setw(4)<<age<<endl;
    cout<<"Roll No"<<endl;
    cout<<setw(4)<<rollno<<endl;

    // float a=129.455396;
    // cout<<"Float with 2 precision = "<<setprecision(2)<<a<<endl; //setprecision used to set precision of decimal numbers
    // cout<<"Float with 4 precision = "<<setprecision(4)<<a<<endl;
    // cout<<"Float with 6 precision = "<<setprecision(6)<<a<<endl;

return 0;
}

