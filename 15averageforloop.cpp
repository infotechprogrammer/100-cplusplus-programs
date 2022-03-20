#include<iostream>
using namespace std;

int main()
{
    int n;
    long int num,sum=0;
    cout<<"Enter how many number of terms you want to enter: "<<endl;
    cin>>n;
    cout<<"Enter numbers now :"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        sum = sum + num;
    }
    float avg = float(sum)/n;
    cout<<"Average = "<<avg<<endl;

return 0;
}