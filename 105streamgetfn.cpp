// #include<iostream>
// using namespace std;

// int main()
// {
//     const int MAX = 80;
//     char str[MAX];
//     cout<<"Enter a string\n";
//     cin.get(str,MAX);
//     cout<<"String is ="<<str;

// return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    const int MAX = 80;
    char str[MAX];
    cout<<"Enter a string\n";
    cin.getline(str,MAX,'/');
    cout<<"\nString is =\n"<<str;

return 0;
}