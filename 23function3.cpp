#include<iostream>
using namespace std;

int main()
{
    void func1(char,int);
    func1('a',3);
    func1('b',2);
    func1('c',1);
    cout<<"\n";
    func1('d',1);
    func1('e',2);
    func1('f',3);
       
return 0;
}
void func1(char ch,int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<ch;
    }
    cout<<"\n";
}