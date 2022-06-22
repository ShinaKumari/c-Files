#include<iostream>
using namespace std;
int main(){
  float cm,feet,inches;
  cout<<"enter the height in cm: ";
  cin>>cm;
  feet = inches/12;
  inches = cm/2.54;
  cout<<" your height in feet"<<feet<<endl;
  cout<<" your height in inches"<<inches<<endl;


    return 0;
}