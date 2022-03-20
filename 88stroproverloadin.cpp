#include<iostream>
#include<string.h>
using namespace std;

class strng
{
    char st[20];
    public:
    strng() // Construtor with no paramenter
    {
        strcpy(st," ");
    }
    strng(char s[]) // Construtor with one paramenter
    {
        strcpy(st,s);
    }
    void show()
    {
        cout<<st;
    }strng operator +(strng); //declaration of overloaded operator function
};
strng strng::operator +(strng ss2)
{
    strng temp; // create temporary object
    strcpy(temp.st,st); // copy string left object
    strcat(temp.st,ss2.st); // add string of right object
    return(temp);
} 
int main()
{
    char h[6] = "Happy";
    char d[8] = " Diwali";
    strng s1(h); // Uses one parameter construtor
    strng s2(d);
    strng s3; // Uses construtor with no parameter
    cout<<"Before concatenation \n";
    cout<<"s1 = ";
    s1.show();
    cout<<"\ts2 = ";
    s2.show();
    cout<<"\ts3 = ";
    s3.show();
    s3 = s1 +s2; // equivalent to s1.operator+(s2);
    cout<<"\nAfter Concatenation \n";
    s3.show();

return 0;
}