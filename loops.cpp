#include<iostream>
using namespace std;

int main()  {
    // for(int x = 1; x<=1000; x++) {
    //     cout<<x<<" :- Hello"<<endl;
    // }
    
    int x = 1;
    // while(x <= 10){
    //    cout<<x<<" :- Hello"<<endl;
    //     x++;    
    // }
    
    // do{
    //     cout<<x<<" :- Hello"<<endl;
    //     x++;    

    // }while(x<=10);

    for(int x = 1; x<=3; x++)   {
        for(int z = 1; z<=5; z++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}