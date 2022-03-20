// //Program 1
// #include<iostream>
// #include<conio.h>
// using namespace std;

// class Triangle
// {
// private:
// int s1=2,s2=3,s3=4;
// public:

// void area()
// {
//     int area = (s1+s2+s3)/2;
//     cout<<"Area of Triangle = "<<area;
// }

// void perimeter()
// {
//     int perimeter = s1+s2+s3;
//     cout<<"\nPerimeter of Triangle = "<<perimeter;
// }

// };

// int main()
// {
//     Triangle obj;
//     obj.area();
//     obj.perimeter();
// getch();
// return 0;
// }

// // Program  2
// #include<iostream>
// #include<conio.h>
// using namespace std;

// class Employee
// {
//     private:
//     char name[20];
//     int yearofjoining;
//     int salary;
//     char address[50];
//     public:
//     void showdata()
//     {
//         cout<<"Name\t Year of Joining\tAddress\n";
//         cout<<"Robert\t 1994\t\t\t56C-wallstreat\n";
//         cout<<"Sam\t 2000\t\t\t674a-wallstreat\n";
//         cout<<"John\t 1999\t\t\t54p-wallstreat";
//     }
// };

// int main()
// {
//     Employee obj;
//     obj.showdata();
// getch();
// return 0;
// }


// Program 3
#include<iostream>
#include<conio.h>
using namespace std;

class StudentGrade
{
    public:
    void Set_Value(int s_id, char lname[15], int n_subject, int t_grade)
    {
        int sid = s_id;
        char l_name = lname[15];
        int n_subjects = n_subject;
        int tgrade = t_grade;
    }



};

int main()
{
    
getch();
return 0;
}


////Program 4
// #include <iostream>
// #include <conio.h>
// using namespace std;


// class Array
// {
// private:
//     int list[100];
//     int counter;

// public:
//     void AddEnd(int data)
//     {
//         cout << "Element " << data << " is added to the array";
//         cin >> list[data];
//     }

//     void Print()
//     {
//         cout << "\nElements in array :";

//         for (int i = 0; i < 2; i++)
//         {
//             cout << list[i] << " ";
//         }
//     }
// };

// int main()
// {
//     Array obj;
//     obj.AddEnd(10);
//     // obj.DeleteEnd();
//     obj.Print();
//     getch();
//     return 0;
// }