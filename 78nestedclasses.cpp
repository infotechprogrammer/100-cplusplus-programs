#include<iostream>
using namespace std;

class student 
{
    private:
    int rollno;
    char name[20];
    public:
    void read();
    void show();
    class date
    {
        private:
        int dd,mm,yy;
        public:
        void read(); //declaration
        void show();
    } dob; //object of nested date class
};

int main()
{
    student s1;
    s1.read();
    s1.show();  

return 0;
}

void student::date::read()
{
    cin>>dd>>mm>>yy; // Defining read() of nested class
}
void student::date::show()
{
    cout<<"\nDate = "<<dd<<"/"<<mm<<"/"<<yy;
}
void student::read()
{
    cout<<"Enter Name and Rollno ="<<endl;
    cin>>name>>rollno;
    cout<<"\nENter date of birth (dd mm yyyy) = ";
    dob.read(); // involing read() of nested date class
}
void student::show()
{
    cout<<"Rollno = "<<rollno<<"\tName = "<<name;
    dob.show();
}