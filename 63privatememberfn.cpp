#include<iostream>
using namespace std;

class employee
{
    private:
    char emp_name[20];
    double basic_pay;
    double cal_da() //Private member function not accessible outside the class
    {
        double da=0.5*basic_pay;
        return(da);
    }
    double cal_hra() //Private member function not accessible outside the class
    {
        double hra=0.15*basic_pay;
        return(hra);
    }
    public:
    void read();
    void display_salary();
};
void employee::read()
{
    cout<<"Enter employee name = ";
    cin>>emp_name;
    cout<<"Enter basic salary of employee = ";
    cin>>basic_pay;
}
void employee::display_salary()
{
    double gross_sal;
    double da = cal_da();
    double hra = cal_hra();
    gross_sal = basic_pay + da + hra;
    cout<<"\n Gross salary of employee = "<<gross_sal;
}

int main()
{
    employee emp1;
    emp1.read();
    emp1.display_salary();

return 0;
}