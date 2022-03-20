#include <iostream>
using namespace std;

void sort(int list[]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(list[j]>list[j+1]){
                int temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
       }
    }   for(i=0;i<10;i++){cout<<list[i]<<", ";}
}

void sort(double list[]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(list[j]>list[j+1]){
                double temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
       }
    }   for(i=0;i<10;i++){cout<<list[i]<<", ";}
}

int main()
{
  int integerlist[]={23,2,34,20,43,22,32,62,43,34};
  double doublelist[]={43.9,77.01,23.02,2.05,34.77,23.15,43.6,23.05,32.8,32.5,43.7};
  cout<<"Sorted Integer list: "<<endl;
  sort(integerlist);
  cout<<"\n\nSorted Double list: "<<endl;
  sort(doublelist);
  return 0; 
}