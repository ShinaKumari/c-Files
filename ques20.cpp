/* WAP to accept the age of n employees and count how many persons are child,teen,youth and old.*/

#include <iostream>
using namespace std;
int main()
{
    int n, age;
    cout << "enter the age of employees" << endl;
    cin >> age;
    for (int n = 0; age <= n;)
    {
        if (age >= 1 && age <= 10)
        {
            cout << " the employees is child" << endl;
            cout << "the employees is teen" << endl;
        }
        else if (age <= 20)
        {
            cout << "the employees is youth" << endl;
        }
        else
        {
            cout << "the employees is old" << endl;
        }
    }

    return 0;
}