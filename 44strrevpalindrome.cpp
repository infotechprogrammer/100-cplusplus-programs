#include<iostream>
#include<string.h>
using namespace std;

int main() //using strcmp,strrev,strupr and strlwr string functions
{
    char a[80], b[80];
    cout<<"Enter a string : ";
    cin.get(a,80);
    strcpy(b,a);                                      
    strrev(a);
    if(strcmp(b,a)==0){
        cout<<strupr(b)<<" is palindrome";
    }else{
        cout<<strlwr(b)<<" is not palindrome";
    }

return 0;
}