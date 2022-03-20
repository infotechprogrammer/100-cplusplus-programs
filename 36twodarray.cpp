#include<iostream>
using namespace std;

int main()
{
    int a[10][10],m,n;
    cout<<"Enter number of rows should be less than 10"<<endl;
    cin>>m;
    cout<<"Enter number of columns should be less than 10"<<endl;
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }   
    }
    cout<<"Elements are :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";   
    }    
return 0;
}