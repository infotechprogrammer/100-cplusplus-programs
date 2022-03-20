#include<iostream>
using namespace std;

class time
{
    private:
    int hours, mins;
    public:
    time(int m)
    {
        hours=m/60;
        mins=m%60;
    }
    void show()
    {
        cout<<"Time in hours & minutes = "<<hours<<":"<<mins;
    }
};

int main()
{
    

return 0;
}