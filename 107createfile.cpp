#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int rollno,marks;
    char name[20];
    ofstream out_file("stud.txt");
    if(!out_file)
    {
        cerr<<"File cannot open correctly";
        exit(-1);
    }
    cout<<"Enter student details :";
    cout<<"\nRollno :"; cin>>rollno;
    cout<<"Name :"; cin>>name;
    cout<<"Marks :"; cin>>marks;
    cout<<"Writing student details into file...";
    out_file<<rollno<<endl;
    out_file<<name<<endl;
    out_file<<marks<<endl;

return 0;
}