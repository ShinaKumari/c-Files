/*  WAP to print the even number nos. between 1 to 20*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"\n print even nos."<<endl;
    cin>>n;
    cout<<"print even nos.b/w 1 to 20"<<endl;
    for (int i = 2; i<= 20; i = i + 2)
    {
        cout << i<< endl;
    }

    return 0;
}