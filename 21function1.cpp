#include<iostream>
using namespace std;

int main()
{
    void starprint(); //Function declaration
    starprint();
    cout<<"Function with No Parameter and No Return type"<<endl;
    starprint();

return 0;
}

void starprint() //can use 'void' in these brackets ()
{
    for(int i=1; i<=45; i++)
    cout<<"*";
    cout<<"\n";
}