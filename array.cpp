#include <iostream>
using namespace std;


void printArray(int arr1[], int size)    {
    for(int x = 0; x<size; x++) {
        cout<<arr1[x]<<" ";
    }
    cout<<endl;
}

int main()  {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int arr[10];
    // cout<<arr[7];
    // cout<<"Enter 10 Values :- ";
    // for(int x = 0; x<10; x++)   {
    //     cin>>arr[x];
    // }
    // cout<<"Printing Values :- ";
    // for(int x = 0; x< 10; x++)  {
    //     cout<<arr[x]<<" ";
    // }
    arr[2] = 300;

    // cout << arr[2];


    int result = 0;
    for(int x = 0; x<10; x++)   {
        result += arr[x]; // result = result + arr[x];
    }
    // cout<<"Sum array :- "<<result;

    int maxValue = arr[0];
    for(int x =1; x<10; x++)    {
        if (maxValue < arr[x])
            maxValue = arr[x];
    }

    // cout<<"Max Value is :- "<<maxValue;

    int target = 9;
    bool flg = false;
    for(int x = 0; x<10; x++)   {
        if(target == arr[x])    {
            flg = true;
            break;
        }
    }
    // if(flg) {
    //     cout<<"True";
    // } else{
    //     cout<<"False";
    // }


    int size = sizeof(arr[0]);
    // cout<<"Size of Array :- "<<size;

    printArray(arr,10);


    cout << endl;
    return 0;
}