#include<iostream>
using namespace std;

int main()
{
    int n,no=1;
    cout<<"Enter how many numbers cube you want: "<<endl;
    cin>>n;
    while(no<=n)
    {
        cout<<"Cube of "<<no<<" = "<<no*no*no<<endl;
        no++;
    }

return 0;
}