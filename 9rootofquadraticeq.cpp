#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,x1,x2;
    cout<<"Enter values of a,b,c :";
    cin>>a>>b>>c;
    float d=(b*b)-(4*a*c);
    if(d==0)
    {
        x1=x2=(-b)/(2*a);
        cout<<"Roots are real and equal x1=x2= "<<x1;
    }else if(d>0)
    {
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
        cout<<"Roots are x1= "<<x1<<"\tx2= "<<x2;
    }else
    {
        cout<<"Roots are imaginary";
    }

return 0;
}