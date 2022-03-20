#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int rollno,marks;
    char name[20];
    ifstream inp_file("stud.txt");
    if(!inp_file)
    {
        cerr<<"File cannot open correctly";
        exit(-1);
    }
    inp_file>>rollno;
    inp_file>>name;
    inp_file>>marks;
    cout<<"Reading student details into file..."<<endl;
    cout<<"\nRollno :"<<rollno; 
    cout<<"\nName :"<<name; 
    cout<<"\nMarks :"<<marks; 
return 0;
}