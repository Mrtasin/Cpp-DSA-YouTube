#include <iostream>
using namespace std;
void printName();
int gv = 10;

int add(int a, int b, int c = 0, int d = 0) {
    return a + b+ c + d;
}

int add1()
{
    int a, b;
    cout<<gv;
    cout << "Enter two number : ";
    cin >> a >> b;
    return a + b;
}

int main()
{
    printName(); // function Calling
    // cout<a;
    int sum = add(10, 20);
    cout << "Sum is :- " << sum << endl;
    sum = add(10, 20,30);
    cout << "Sum is :- " << sum << endl;
    return 0;
}

void printName()
{
    cout << "Tasin Coder";
    cout << endl;
}
