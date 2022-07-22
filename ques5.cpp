
/* print factorial of  a number */
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int num,factorial=1;
cout<<"\n Enter the factorial value of a num";
cin>>num;
for(int a=1; a<=num; a++ ){
    factorial=factorial*a;
}
cout<<"\n factorial of a given num is factoial"<<factorial<<endl;
    return 0;
}

