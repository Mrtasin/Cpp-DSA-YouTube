#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    if(n>0) {
        cout<<"V+";
    }
    else if(n<0)    {
        cout<<"V-";
    } else{
        cout<<"Zero";
    }
    cout<<endl;

    return 0;
}