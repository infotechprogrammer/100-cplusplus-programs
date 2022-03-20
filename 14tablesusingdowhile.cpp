#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    long long int num,i=1,prod;
    cout<<"Enter number who's table you want : "<<endl;
    cin>>num;
    cout<<"Table of "<<num<<" :0"<<endl;
    do{
        prod = num * i;
        cout<<num<<" X "<<setw(2)<<i<<" = "<<prod<<endl;
        i = i+1;
    }while(i<=10);
    cout<<"End of table";

return 0;
}