#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age of person:";
    cin >> age;
    // checking voting eligibility
    if (age >= 18)
    {
        cout << "the person is eligible for vote:";
    }
    else
    {
        cout << "the person is not eligible for vote:";
    }

    return 0;
}
