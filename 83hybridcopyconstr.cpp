#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
int r,i;
public:
complex(int a, int b);
complex(complex &c, int k);
void show();
};
complex::complex(int a,int b)
{
r=a;
i=b;
}
complex::complex(complex &c, int k)
{
r=c.r;
i=k;
}
void complex::show()
{
cout<<r<<" +i"<<i<<"\n";
}
int main()
{
int x,y,z;
z=7;
cout<<"\nEnter x and y ";
cin>>x>>y;
complex c1(x,y);
complex c2(c1,z); //Hybrid Copy Constructor calling
//cout<<"\n c1 = "<<c1.show();
//cout<<"\n c2 = "<<c2.show();
c1.show();
c2.show();
getch();
}