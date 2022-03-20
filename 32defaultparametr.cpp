#include<iostream>
using namespace std;

void volume(int l=10, int w=10, int h=10)
{
    cout<<"Volume = "<<l*w*h<<endl;
}

int main()
{
    volume(); // It will take default parameters given in function defination 10,10,10
    volume(5); //5,10,10
    volume(8,6); //8,6,10
    volume(6,4,5); //6,4,5
return 0;
}