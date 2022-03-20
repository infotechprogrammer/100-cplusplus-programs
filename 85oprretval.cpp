#include<iostream>
using namespace std;

class score
{
    private:
    int val;
    public:
    score()
    { val = 0; }
    score operator ++() //prefix overloaded operator function Eg. ++i
    {
        score temp;
        val=val+1;
        temp.val = val;
        return(temp);
    }
    score operator ++(int) //postfix overloaded operator function Eg. i++
    {
        score temp;
        temp.val = val;
        val=val+1;
        return(temp);
    }
    int show(){
        return (val);
    }
};

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