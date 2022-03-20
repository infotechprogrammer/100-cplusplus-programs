#include<iostream>
using namespace std;

int main()
{
    long long int n,no=2;
    cout<<"From 2 to how many numbers do you want even numbers : "<<endl;
    cin>>n;
    cout<<"List of even numbers from 2 to "<<n<<" :";
    while(no<=n)
    {
        cout<<no<<endl;
        no=no+2;
    }

return 0;
}