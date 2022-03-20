#include <iostream>
using namespace std;

class person
{
private:
    char name[20];
    long long int phno;

public:
    void read()
    {
        cout << "\nEnter name and phno:\n";
        cin >> name >> phno;
    }
    void show()
    {
        cout << "\nName = " << name;
        cout << "\nPhone no = " << phno;
    }
};

class student : public person
{
private:
    int rollno;
    char course[20];
    long long int phno;

public:
    void read()
    {
        person::read();
        cout << "\nEnter rollno and course:\n";
        cin >> rollno >> course;
    }
    void show()
    {
        person::show();
        cout << "\nRollno = " << rollno;
        cout << "\nCourse = " << course;
    }
};

class teacher : public person
{
private:
    char dept_name[10];
    char qual[10];

public:
    void read()
    {
        person::read();
        cout << "\nEnter dept_name and qualification :\n";
        cin>>dept_name>>qual;
    }

    void show()
    {
        person::show();
        cout << "\nDepartment name = "<<dept_name;
        cout << "\nQualification = " <<qual;
    }
};

int main()
{
    student s1;
    cout<<"Enter Student Information";
    s1.read();
    cout<<"Displaying Student Informaion";
    s1.show();
    teacher t1;
    cout<<"\nEnter Teacher Information";
    t1.read();
    cout<<"Displaying Teacher Informaion";
    t1.show();

    return 0;
}