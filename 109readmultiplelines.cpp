#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[80];
    ifstream fin("multiplelines.txt");
    if(!fin)
    {
        cout<<"File cant open";
        exit(-1);
    }
    cout<<"Contents of file ...\n";
    while(fin.eof()==0)
    {
        fin.getline(str,80);
        cout<<str<<endl;
    }
return 0;
}