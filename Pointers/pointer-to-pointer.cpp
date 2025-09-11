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

    int** ptr2 = &ptr;    // pointer to pointer
    cout<<ptr2<<endl;


}
