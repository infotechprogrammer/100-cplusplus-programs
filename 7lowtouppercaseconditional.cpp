#include<iostream>
using namespace std;

int main()
{
    char c1;
    cout<<"Enter a character = ";
    cin>>c1;
    char c2=(c1>='a'&& c1<='z')?('A'+c1-'a'):c1;
    cout<<"Uppercase Equivalent = "<<c2;

return 0;
}