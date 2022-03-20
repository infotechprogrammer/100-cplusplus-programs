#include<iostream>
using namespace std;

class person
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
        cout<<"\n Name = "<<name;
        cout<<"\n Phone no = "<<phno;
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
        cout<<"Enter rollno and course:\n";
        cin>>rollno>>course;
    }
    void show()
    {
        person::show();
        cout<<"\n Rollno = "<<rollno;
        cout<<"\n Course = "<<course;
    }
};

class exam : public student
{
    private:
    int m[4];
    float per;
    public:
    void read();
    void cal();
    void show();
};

void exam::read()
{
    student::read();
    cout<<"Enter marks:\n";
    for(int i=0; i<4;i++)
    {
        cin>>m[i];
    }
}
void exam::cal()
{
    int tot_marks = 0;
    for(int i=0;i<4;i++)
    {
        per = float(tot_marks)/4;
    }
}

void exam::show()
{
    student::show();
    cout<<"\n Marks:";
    for (int i=0;i<4;i++) 
    {
        cout<<m[i]<<"\t";
    }
    cout<<"Percentage = "<<per;    
}

int main()
{
    exam e1;
    e1.read();
    e1.cal();
    e1.show();

return 0;
}