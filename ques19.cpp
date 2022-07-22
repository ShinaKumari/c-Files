/* WAP to find the sum of five nos. given by the user */
#include <iostream>
using namespace std;
int main(){
  int num, sum=0;

   cout<<" enter 5 numbers:"<<endl;

  for(int i=0; i<5; i++)
  {
   // input is stored in num
    cin>>num;

   // adding 5 numbers
    sum=sum+num;
  }
     cout << "\n The sum of 5 numbers is: "<<sum << endl;
     return 0;
}