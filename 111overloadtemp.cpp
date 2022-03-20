#include<iostream>
using namespace std;
template<class T>
T min(T &a, T &b) 
{
    return(a<b)?a:b;
}
template<class T>
T min(T &a, T &b, T &c)
{
    return (a<b)?((a<c)?a:c) : ((b<c)?b:c);
}
int main()
{
    int a=5,b=10,c=15;
    float x=3.1,y=4.1,z=5.1;
    cout<<"\nMin of 2 integer values = "<<min(a,b);
    cout<<"\nMin of 2 float values = "<<min(x,y);
    cout<<"\nMin of 3 integer values = "<<min(a,b,c);
    cout<<"\nMin of 3 float values = "<<min(x,y,z);
    return 0;
}