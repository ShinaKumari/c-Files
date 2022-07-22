/* WAP to print sum of all even and odd numbers seperately between 1 to 20*/
#include <iostream>
using namespace std;
int main(){
int oddsum=0,evensum=0,n;
cout<<"print sum of even number and odd number seperately"<<endl;
cin>>n;
for(int n=2,sum=0; n<=20; n++){
    if(n%2==0){
evensum=evensum+n;
    }
else{
oddsum=oddsum+n;
}
cout<<"print sum of even number"<<evensum<<endl;
cout<<"print sum of odd number"<<oddsum<<endl;
}

    return 0;
}