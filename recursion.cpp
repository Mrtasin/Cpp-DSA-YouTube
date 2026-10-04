#include<iostream>
using namespace std;

void printNNumbersV1(int n)   {
    if(n == 0)
        return;
    printNNumbersV1(n - 1);
    cout<<" "<<n;
}
void printNNumbersV2(int n)   {
    if(n > 0)   {
        printNNumbersV2(n - 1);
        cout<<" "<<n;
    }

}

int fact(int n) // 1 * 2 * 3 * 4 * ...n
{
    if(n == 1 || n == 0)
        return 1;
    return fact(n-1) * n;
}

int fibonacci(int n)    {
    if(n == 1 || n == 2)
        return n-1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()  {
    cout<<fibonacci(10);
    cout<<endl;
    return 0;
}