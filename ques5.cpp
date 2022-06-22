#include<iostream>
#include<conio.h>
using namespace std;
int main(){
   int total, week,day,mnths;
   cout<<"Enter the no.of days:";
   cin>>day;
   day = ((total%365)%30) %7;
   week = (total%365)%7;
   mnths = (total%365)%30;
   cout<<"day"<<day<<endl;
   cout<<"week"<<week<<endl;
   cout<<"mnths"<<mnths<<endl;

    return 0;
}