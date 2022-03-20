#include<iostream>
using namespace std;

class student
{
    private:
    int rollno,marks;
    static int tot_marks;
    public:
    void read()
    {
        cout<<"Enter Rollno and Marks\n";
        cin>>rollno>>marks;
    }
    void cal()
    {
        tot_marks+=marks;
    }
    static void avg_per_marks(int n1)
    {
        double avg = double(tot_marks)/n1;
        cout<<"Average marks of Class is = "<<avg<<"%";
    }

};
int student::tot_marks;
int main()
{
    student s[10];
    int n;
    cout<<"Enter number of students in class : \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s[i].read(); //reading particular student object
        s[i].cal();
    }
    student::avg_per_marks(n); //calling static member function

return 0;
}