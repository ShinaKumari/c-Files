#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int total, days,yrs,mnths;
  cout<<"Enter the num of days:";
  cin>>days;
  days=((total%365)%30)%7;
  mnths=(total%365)%30;
  yrs=total%365;
  cout<<"days"<<days<<endl;
  cout<<"mnths"<<mnths<<endl;
  cout<<"yrs"<<yrs<<endl;
  return 0;

}