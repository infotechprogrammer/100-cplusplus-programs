#include<iostream>
using namespace std;

class stud_basic
{
    private:
    int rollno;
    char name[20];
    public:
    void read()
    {
        cout<<"Enter rollno and name :\n";
        cin>>rollno>>name;
    }
    void show()
    {
        cout<<"Rollno = "<<rollno;
        cout<<"\nName = "<<name;
    }
};

class result:private stud_basic
{
    private:
    int m[4];
    double per;
    public:
    void input_marks();
    void cal();
    void display();
};

void result::input_marks()
{
    read(); // Accessing base's inherited member indirectly in thi member function
    cout<<"enter marks of four subjects:\n";
    for(int i=0; i<4;i++)
    {
        cin>>m[i];
    }
}
void result::cal()
{
    int tot_marks=0;
    for(int i=0; i<4;i++)
    {
        tot_marks=tot_marks+m[i];
    }
    per=double(tot_marks)/4;
}
void result::display()
{
    void show(); // Accessing base's inherited member indirectly in thi member function
    cout<<"\nDisplaying marks :";
    for(int i=0;i<4;i++)
    {
        cout<<m[i]<<"\t";
    }
    cout<<"\nAverage = "<<per;
}

int main()
{
    result r1;
    r1.input_marks(); //accessing derived's public member
    r1.cal(); //calculating result of a student
    r1.display(); //Displaying result details

return 0;
}