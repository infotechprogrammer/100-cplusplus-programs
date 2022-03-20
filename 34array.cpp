#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }

return 0;
}