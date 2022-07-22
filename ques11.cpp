/* WAP to print  the odd numbers b/w 1 to 20 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, n;
    cout << "\n print odd nos."<<endl;
    cin >> n;
    cout << endl;
    cout << "\n print odd numbers b/w 1 to 20"<<endl;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << "   ";
        }
    }
    return 0;
}