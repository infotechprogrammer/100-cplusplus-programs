#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age for voting:";
    cin >> age;
    try
    {
        if (age > 0 && age < 18)
        {
            throw 0;
        }
        else if (age > 120)
        {
            throw 'v';
        }
        else if (age < 0)
        {
            throw 2.8;
        }
        else if (age == 0)
        {
            throw 0.10;
        }
        else
        {
            cout << "Ellegible for voting";
        }
    }
    catch (int i)
    {
        cout << "Exception : Not elligible for voting";
    }
    catch (...)
    {
        cout << "Exception : Invalid age for voting";
    }

    return 0;
}