# C-Files
/* WAP to find the factorial value of a number*/
#include <iostream>
using namespace std;
int main(){
    int i,num,factorial=1;
    cout<<"enter any num"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++){
         factorial=factorial*i;      
    }
cout<<"factorial of num"<<num<<factorial<<endl; 
    return 0;
}
