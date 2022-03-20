#include<iostream>
using namespace std;

class time
{
    private:
    int hours,mins;
    public:
    time(int hr, int mm)
    {
        hours = hr;
        mins = mm;
    }
    operator int()
    {
        int mnts;
        mnts = hours * 60 + mins;
        return(mnts);
    }
    void show()
    {
        cout<<"Time in hours & minutes = "<<hours<<":"<<mins;
    }
};

int main()
{
    int minutes;
    time t1(1,30); //calls constructor with two parameters
    t1.show();
    minutes=t1; //equivalent to t1.operator int();
    cout<<"\nTime in minutes = "<<minutes;

return 0;
}