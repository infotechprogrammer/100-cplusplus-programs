#include<iostream>
using namespace std;

class student
{
    int rollno;
    char name[20];
    public:
    void read(); void show();
    student()
    {
        cout<<"No ParameterConstructor Invoked\n";
    }
    ~student()
    {
        cout<<"\nDestructor invoked";
    }
};

void student::read()
{
    cout<<"\nEnter name and rollno = "<<endl;
    cin>>name>>rollno;
}
void student::show()
{
    cout<<"\nName = "<<name;
    cout<<"\nRollno = "<<rollno;
}

int main()
{
    student *ptr;
    int n;
    cout<<"Enter number of students = ";
    cin>>n;
    ptr = new student[n]; //n dynamic objects
    for(int i=0;i<n;i++)
    {
        (ptr+i)->read();
        (ptr+i)->show();
    }
    delete[] ptr;

return 0;
}