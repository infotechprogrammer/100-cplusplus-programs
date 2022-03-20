#include<iostream>
using namespace std;

int main()
{
    void cal_rect(int,int,int &,int &);
    int l,b,area,perimeter;
    cout<<"Enter length and breadth of rectangle :\n";
    cin>>l>>b;
    cal_rect(l,b,area,perimeter);
    cout<<"\nArea of Rectangle = "<<area;
    cout<<"\nPerimeter of Rectangle = "<<perimeter;

return 0;
}
void cal_rect(int x,int y,int &ar, int&pr)
{
    ar=x*y;
    pr=2*(x+y);
}