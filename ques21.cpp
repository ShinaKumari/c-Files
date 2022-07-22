/* WAP to find the sum and average temperature of a week.If the user input the daily temperature */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,temp7,sum=0,avg;
	cout<<"Enter 7 days Tempreature:\n";
	for(i=0;i<7;i++){
		cin>>temp7;
		sum+=temp7;
	}
	avg=sum/7;
	cout<<"Average of 7 days Temperature is:"<<avg;
    getch ();
    }