#include<iostream>
#include<vector>
using namespace std;

void changeA(int* ptr){        // pass by reference

    *ptr = 20;
    cout<<" a in changeA function : "<<*ptr<<endl;

}

    int main(){

    int a = 10;

    changeA(&a);
    cout<<" a in main function : "<<a<<endl;

    return 0;

    }