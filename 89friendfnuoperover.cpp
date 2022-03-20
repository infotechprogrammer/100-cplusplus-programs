#include<iostream>
using namespace std;

class score
{
    private:
    int val;
    public:
    score()
    { val = 0; }
    
    int show(){
        return (val);
    }
    friend score operator++(score &); // prefix
    friend score operator++(score & ,int); // postfix
};

score operator ++(score &temp) //prefix overloaded operator function Eg. ++i
    {
        temp.val=temp.val+1;
        return(temp);
    }
    score operator ++(score &temp,int) //postfix overloaded operator function Eg. i++
    {
        temp.val = temp.val;
        temp.val=temp.val+1;
        return(temp);
    }

int main()
{
    score s1,s2;
    cout<<"\nInitial value of s1 object = "<<s1.show();
    cout<<"\nInitial value of s2 object = "<<s2.show();
    s2 = ++s1;
    cout<<"\ns1 = "<<s1.show();
    cout<<"\nValue of s2 after prefix operation = "<<s2.show();
    s2 = s1++;
    cout<<"\ns1 = "<<s1.show();
    cout<<"\nValue of s2 after prefix operation = "<<s2.show();

return 0;
}