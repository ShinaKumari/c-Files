/* WAP to print multiplication table of a given no.in the following
form.
INPUT n=2
2*1=2
2*2=4
2*3=6 */
#include <iostream>
using namespace std;
int main(){
 int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}