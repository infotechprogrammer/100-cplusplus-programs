#include<iostream>
using namespace std;
template<class T>
T min(T &a, T &b) //or void min(T &a, T &b)
{
    return(a<b)?a:b;
}

int main()
{
    int x,y;
    cout<<"Enter Integer Values"<<endl;
    cin>>x>>y;
    cout<<"Minimum numbers of Integers = "<<min(x,y);
    float p,q;
    cout<<"\nEnter Float Values"<<endl;
    cin>>p>>q;
    cout<<"Minimum numbers of Floats = "<<min(p,q);
    char c1,c2;
    cout<<"\nEnter two characters"<<endl;
    cin>>c1>>c2;
    cout<<"Minimum character value(based on ASCII value) = "<<min(c1,c2);
    return 0;
}