/* WAP to print the sum of all even number b/w 1 to 20 */
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int x,sum=0;
cout<<"\n sum of all even nos.";
cin>>sum;
cout<<"\n print sum of all even nos. b/w 1 to 20"<<endl;
for(int x=2, sum=0; x<=20; x++)
{
    if(x%2==0){
        sum=x++;
    }
    
    cout<<sum<<endl;
}
    return 0;
}