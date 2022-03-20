//Lets see functional (recursion) appproach for this problem:

#include<iostream>
using namespace std;

int main()
{
    long long int fact(int);
    int num;
    cout<<"Enter a number who's factorial you want : "<<endl;
    cin>>num;
    cout<<"Factorial = "<<fact(num);

return 0;
}

long long int fact(int x)
{
    long long int prod = 1;
    if(x==0 || x==1)
    {
        prod = 1;
    }else
    {
        for(int i=2; i<=x; i++)
        {
            prod = x *fact(x-1);
        }
    }
    return (prod);
}




// It is a iterative approach to solve this problem
// #include<iostream>
// using namespace std;

// int main()
// {
//     long long int n,fact=1;
//     cout<<"Enter number who's factorial you want"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     cout<<"Factorial of number "<<n<<" = "<<fact;

// return 0;
// }