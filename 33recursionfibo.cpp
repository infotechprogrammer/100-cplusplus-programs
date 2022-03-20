#include<iostream>
using namespace std;

int fibo (int m){
    if(m==1)
    {
        return(0);
    }
    else if(m==2 || m==3)
    {
        return(1);
    }else{
        return(fibo(m-1)+fibo(m-2));
    }
}

int main()
{
    int n;
    cout<<"Enter no of terms = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fibo(i)<<" ";
    }
return 0;
}