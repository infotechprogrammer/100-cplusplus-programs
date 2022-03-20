#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    int max(int,int);
    cout<<"Enter two numbers = ";
    cin>>a>>b;
    c=max(a,b);
    cout<<"Greatest = "<<c;

return 0;
}
int max(int x, int y)
{
    if(x>y)
    {
        return(x);
    }else{
        return(y);
    }
}