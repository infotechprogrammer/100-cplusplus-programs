#include<iostream>
using namespace std;
template<class T> 
class sample
{
    T a,b,c;
    public:

void getdata()
{
    cout<<"\nEnter the numbers:"<<endl;
    cin>>a;
    cout<<"Enter the 2nd number"<<endl;
    cin>>b;
}

T sum()
{
    c=a+b;
    return (c);
}

};


int main()
{
    sample<int>obj1;
    sample<float>obj2;
    cout<<"Enter integer number"<<endl;
    obj1.getdata();
    cout<<"Sum of integer values:"<<obj1.sum()<<endl;
    cout<<"\nEnter float number"<<endl;
    obj2.getdata();
    cout<<"Sum of float values:"<<obj2.sum()<<endl;
    return 0;
}
