#include<iostream>
using namespace std;

class time
{
    private:
    int hours,minutes;
    public:
    void read_time();
    void add_time(time,time);
    void show_time();
};


    void time::read_time()
    {
        cout<<"Enter time in hours and minutes : ";
        cin>>hours>>minutes;
    }
    void time::add_time(time tt1,time tt2)
    {
        int min = tt1.minutes + tt2.minutes;
        int hrs = min/60;
        minutes = min%60;
        hours = hrs + tt1.hours + tt2.hours;
    }
    void time::show_time()
    {
        cout<<"Time obtained on adding = ";
        cout<<hours<<":"<<minutes;
    }

int main()
{
    time t1,t2,t3;
    t1.read_time();
    t2.read_time();
    t3.add_time(t1,t2); //t3 = t1 + t2
    t3.show_time();
    

return 0;
}