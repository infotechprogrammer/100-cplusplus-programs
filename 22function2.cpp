#include<iostream>
using namespace std;

int main()
{
    int a,b;
    void sum(int, int); //declaration
    cout<<"Enter two numbers = "<<endl;
    cin>>a>>b;
    sum(a,b); //calling
return 0;
}
void sum(int x,int y) //defination
{
    int z;
    z=x+y;
    cout<<"Sum = "<<z;
}