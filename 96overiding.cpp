#include<iostream>
using namespace std;

class person //base class
{
    private:
    char name[20];
    long long int phno;
    public:
    void read()
    {
        cout<<"Enter name and phno:\n";
        cin>>name>>phno;
    }
    void show()
    {
        cout<<"\nName = "<<name;
        cout<<"\nPhone no = "<<phno;
    }
};
class student : public person //Publically derived class
{
    private:
    int rollno;
    char course[20];
    public:
    void read()
    {
        person::read(); //Refers to read of 'person class'
        cout<<"enter Rollno and course \n";
        cin>>rollno>>course;
    }
    void show()
    {
        person::show(); //Refers to show of 'person class'
        cout<<"\nRollno = "<<rollno;
        cout<<"\nCourse = "<<course;
    }
};

int main()
{
    student s1;
    s1.read();
    cout<<"\nDisplaying Student Information:";
    s1.show();

return 0;
}