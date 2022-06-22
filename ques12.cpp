#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 char ch;
 cout<<"Enter the character are :";
 cin>>ch;
 cout<<"\n enter the next four character:";
 cout<<"\n" << (char)(ch+1);
 cout<<"\n"<< (char)( ch+2);
 cout<<"\n"<< (char)(ch+3);
 cout<<"\n"<< (char)(ch+4);
    return 0;
}