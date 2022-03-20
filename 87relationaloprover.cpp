#include<iostream>
using namespace std;

class dob
{
    private:
    int dd,mm,yyyy;
    public:
    dob(int d, int m, int y)
    {
        dd=d; mm=m; yyyy=y;
    }
    void show()
    {
        cout<<"DOB = "<<dd<<"-"<<mm<<"-"<<yyyy<<"\n";
    }
    int operator ==(dob);
};
int dob::operator==(dob dd2) //overloading operator function defination
{
    if((yyyy==dd2.yyyy) && (mm==dd2.mm) && (dd==dd2.dd))
    {
        return 1;
    }else
    {
        return 0;
    }
    
}
int main()
{
    int dd1,mm1,yy1,dd2,mm2,yy2;
    cout<<"Enter date of birth 1 (Format : dd mm yyyy) :";
    cin>>dd1>>mm1>>yy1;
    dob d1(dd1,mm1,yy1);
    cout<<"Enter date of birth 2 (Format : dd mm yyyy) :";
    cin>>dd2>>mm2>>yy2;    
    dob d2(dd2,mm2,yy2);
    d1.show();
    d2.show();
    if(d1==d2) // overloaded operator function call
    {
        cout<<"d1 and d2 are same DOB's";
    }else{
        cout<<"d1 and d2 have different DOB's";
    }

return 0;
}