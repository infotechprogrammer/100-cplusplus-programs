//You can see explanation of program in last of the program see its important
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many lines : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" "; // if you print j here then series will be 1\n 1 2\n 1 2 3\n 1 2 3 4 like this
        }
        cout<<endl;
    }

return 0;
}

/*
On execution we input ythe number of lines n (say 4).
In this program the inner j loop is nested inside the outer i loop.
For each value of variable i  of outer loop, the inner loop will be executed completely.
For 1st iteration of outer loop, the inner loop will be executed completely.
For 1st iteration of outer loop, the i is initialized to 1 and inner loop is executed once as the condition (j<=i) ,
is satisfied only once, thus prints the value of i (i.e. 1) once.
the statement cout<<"\n" must be outside the inner loop and inside the outer loop in order to produce exactly one
line for each iteration of outer loop.
On second iteration(pass) of outer loop, when i=2 then inner loop executes 2 times and thus displaying value of i (i.e 2)
2 times and process will continue until the condition in the loop becomes false.
*/