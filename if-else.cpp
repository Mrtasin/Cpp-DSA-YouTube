#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :- ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
    return 0;
}