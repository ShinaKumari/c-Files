/* print sum of all odd numbers b/w 1 to 20  */
#include <iostream>

using namespace std;

int main(){
int x, sum=0;
cout<<"sum of odd nos."<<endl;
cin>>x;
for(int x=1, sum=0;x<=20;x++){
    if(x%1==0){
        sum=x++;
    }
    cout<<"sum of odd nos."<<sum<<endl;
}

return 0;

}