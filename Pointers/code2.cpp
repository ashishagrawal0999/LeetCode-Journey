#include<iostream>
#include<vector>
using namespace std;
int main(){

    int a = 10;
    int* ptr = &a;

    int** parentPtr = &ptr;

    cout<<"a is : "<<a<<endl;
    cout<<"&a is : "<<&a<<endl;
    cout<<"ptr is : "<<ptr<<endl;

    cout<<endl;

    cout<<"*(&a) is : "<<*(&a)<<endl;
    cout<<"*(ptr) is : "<<*(ptr)<<endl;

    cout<<endl;

    cout<<"&ptr is : "<<&ptr<<endl;
    cout<<"parentPtr is : "<<parentPtr<<endl;

    cout<<endl;

    cout<<"*(&ptr) is : "<<*(&ptr)<<endl;
    cout<<"*(parentPtr) is : "<<*(parentPtr)<<endl;


    cout<<endl;

    cout<<**(parentPtr)<<endl;

    return 0;

}