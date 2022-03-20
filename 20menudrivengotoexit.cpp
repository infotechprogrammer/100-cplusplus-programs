#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int inp;
    again:
    cout<<"\nEnter number of that operation you want to perform:"<<endl;
    cout<<"0:\tExit\n";
    cout<<"1:\tPrint Hello:\n";
    cout<<"2:\tSum of two numbers:\n";
    cout<<"3:\tSquare and cube root of number:\n";
    cout<<"n:\tPrint Thankyou\n";
    cin>>inp;

    switch(inp)
    {
        case 0: goto endst;
        case 1:
        cout<<"Hello Ji"; 
        break;
        case 2:
        int a,b;
        cout<<"Enter two numbers : "<<endl;
        cin>>a>>b;
        cout<<"Sum = "<<a+b;
        break;
        case 3:
        int number;
        cout<<"Enter number whose square root and cube root you want";
        cin>>number;
        cout<<"Square Root = "<<sqrt(number)<<endl;
        cout<<"Cube Root = "<<cbrt(number)<<endl;
        break;
        case 4: //upto n
        cout<<"Thankyou";
        break;
        default: cout<<"Enter a Valid number";
        }
        end:
        int in;
        cout<<"\nDo you want to continue (Press 1 for Yes and 0 for No)";
        cin>>in;
        if(in==1){
            goto again;
        }else if(in==0){
            endst:
            exit(0); //Exits the program control out of program
        }else{
            cout<<"Please Enter Valid number";
            goto again;
        }

return 0;
}
