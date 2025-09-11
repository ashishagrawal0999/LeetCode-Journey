#include<iostream>
#include<vector>
using namespace std;

int main(){

    // for int 

    int a = 10;
    int* ptr = &a;

    cout<<ptr<<endl;   
    cout<<&a<<endl;

    cout<<&ptr<<endl;

    cout<<*(&a)<<endl;         // 10 
    cout<<*(ptr)<<endl;        // 10

    // for float 


    float price = 100.90;
    float* ptr2 = &price;

    cout<<ptr2<<endl;
    cout<<&price<<endl;

    return 0;
}
