#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,n;
    a=0; b=1;
    cout<<"Enter number of terms (n) = ";
    cin>>n;
    cout<<"Fibonacci series is "<<endl;
    if(n==1){
        cout<<"0 ";
    }else if(n==2){
        cout<<a<<" "<<b<<" ";
    }else{
        cout<<a<<" "<<b<<" ";
        long int count=3;
        while(count<=n)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            count++;
        }
    }
return 0;
}