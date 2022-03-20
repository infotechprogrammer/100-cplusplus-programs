#include<iostream>
using namespace std;

struct date{
    int dd;
    int mm;
    int yy;
};

int main()
{
    struct date d[3], *p;
    cout<<"Input Elements:\n";
    for(p=d;p<=(d+2);p++)
    {
        cin>>p->dd>>p->mm>>p->yy;
    }
    cout<<"Output :\n";
    for (p=&d[0]; p<=(d+2);p++)
    {
        cout<<p->dd<<"/"<<p->mm<<"/"<<p->yy<<"\n";
    }
     
return 0;
}