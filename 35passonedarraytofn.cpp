#include<iostream>
using namespace std;

double mean(int m[],int n)
{
    double sum = 0.0;
    for(int i=0;i<n;i++)
    {
        sum = sum + m[i];
    }
    double mean = sum/n;
    return(mean);
}

int main()
{
    int x[10],n;
    cout<<"Enteerno of elements";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    double res = mean(x,n);
    cout<<"Mean = "<<res;
return 0;
}