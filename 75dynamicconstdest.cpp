#include<iostream>
#include<string.h>
using namespace std;

class strg
{
private:
    char *name;
    int len;
public:
    strg(char *s)
    {
        len = strlen(s); //Calculates lenght of string
        name = new char[len+1]; //Length + null character
        strcpy(name,s); //copy characters
    }
    void compare(strg &ss2)
    {
        int k;
        k=strcmp(name,ss2.name);
        if(k==0)
        {
            cout<<"\n Both objects have same name";
        }else{
            cout<<"\n Both objects have different name";
        }
    }
    void display()
    {
        cout<<"\n Name of person = "<<name;
    }
    ~strg()
    {
        cout<<"\nReleases memory allocated to "<<name;
        delete[]name;
    }
};

int main()
{
    strg s1("SB");
    strg s2("KB");
    s1.display();
    s2.display();
    s1.compare(s2);

return 0;
}