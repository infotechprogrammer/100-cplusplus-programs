#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    float x, sum=0.0;
    cout<<"Enter how many terms : "<<endl;
    cin>>n;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    float z=x/(x+1);
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(z,i)*1/i;
    }
    cout<<"Sum of Series = "<<sum;

return 0;
}