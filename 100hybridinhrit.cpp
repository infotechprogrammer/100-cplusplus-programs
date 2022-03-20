#include<iostream>
using namespace std;

class student
{
    private:
    int rollno;
    char name[20];
    public:
    void read()
    {
        cout<<"\nEnter Rollno and Name:\n";
        cin>>rollno>>name;
    }
    void show()
    {
        cout<<"\nRollno = "<<rollno;
        cout<<"\nName = "<<name;
    }
};

class exam_internal : public student
{
    protected:
    int sub1_marks;
    int sub2_marks;
    public:
    void read_marks()
    {
        cout<<"\nEnter Internal Marks of Subject 1 (MAX:40) :\n";
        cin>>sub1_marks;
        cout<<"\nEnter Internal Marks of Subject 2 (MAX:40) :\n";
        cin>>sub2_marks;
    }
    void display_marks()
    {
        cout<<"\nInternal Marks of Sub 1 = "<<sub1_marks;
        cout<<"\nInternal Marks of Sub 2 = "<<sub2_marks;
    }
};

class exam_external : public student
{
    protected:
    int sub1_ext_marks;
    int sub2_ext_marks;
    public:
    void read_marks()
    {
        cout<<"\nEnter Internal Marks of Subject 1 (MAX:40) :\n";
        cin>>sub1_ext_marks;
        cout<<"\nEnter Internal Marks of Subject 2 (MAX:40) :\n";
        cin>>sub2_ext_marks;
    }
    void display_marks()
    {
        cout<<"\nExternal Marks of Sub 1 = "<<sub1_ext_marks;
        cout<<"\nExternal Marks of Sub 2 = "<<sub2_ext_marks;
    }
};

class result:public exam_internal, public exam_external 
{
    private:
    int total_marks;
    public:
    void cal_result()
    {
        total_marks = sub1_ext_marks+sub2_ext_marks+sub1_marks+sub2_marks;
        cout<<"Total Marks Obtained = "<<total_marks;
    }
};

int main()
{
    result r1;
    cout<<"Enter student information :\n";
    r1.exam_internal::read();//call read() of student class 
    cout<<"Enter marks of Internal Examination:\n";
    r1.exam_internal::read_marks(); //To resolve ambiguty
    cout<<"Enter marks of External Examination:\n";
    r1.exam_external::read_marks(); //To resolve ambiguty
    cout<<"\nDisplaying Student Details\n";
    r1.exam_internal::show(); //Calls show of student class
    r1.exam_internal::display_marks(); //To resolve ambiguty
    r1.exam_external::display_marks(); //To resolve ambiguty
    cout<<"\nCalculating and displaying result\n";
    r1.cal_result();

return 0;
}