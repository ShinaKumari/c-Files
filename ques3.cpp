#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int sec,hrs,min;
  cout<<"Enter the num of sec:";
  cin>>sec;
  sec = hrs/3600;
  cout<<"Enter the no of hrs:";
  cin>>hrs;
  hrs = sec/3600;
  cout<<"Enter the no of min:"; 
  min = sec/60;
  cout<<"sec:"<<sec<<endl;
  cout<<"hr:"<<hrs<<endl;
  cout<<"min:"<<min<<endl;

    return 0;
}