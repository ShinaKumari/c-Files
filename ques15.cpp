/*WAP to print sum of all even and odd numbers seperately between
a given ranges */
#include <iostream>
using namespace std;
int main(){
int evensum=0,oddsum=0,n,range;
cout<<"print sum of odd and even number seperately a given range"<<endl;
cin>>n;
for(int n=2,evensum=0;n<=range;n++){
    if(n%2==0){
        evensum=evensum+n;
    }
    else{
        oddsum=oddsum+n;
    }
    cout<<"print sum of even nos. seperately"<<evensum<<endl;
    cout<<"print sum of odd nos.seperately"<<oddsum<<endl;
}

    return 0;
}