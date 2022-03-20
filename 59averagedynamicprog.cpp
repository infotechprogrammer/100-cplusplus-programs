#include<iostream>
using namespace std;

int main()
{
    int *p;
    int n,sum=0;
    cout<<"Enter how many elements = ";
    cin>>n;
    p = new int[n];
    if(p==NULL)
    {
        cout<<"Memory Allocation Error";
        exit(0);
    }else{
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter value "<<i+1<<" : "<<endl;
            cin>>*(p+i);
            sum=sum+*(p+i);
        }
        float avg = float(sum)/n;
        cout<<"Average of given value = "<<avg;
        delete[] p;
        
    }

return 0;
}