#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a = 5;
    int* p = &a;
    int** q = &p;

    cout<< *p <<endl;     // 5
    cout<< **q <<endl;    // 5
    cout<< p <<endl;      // p and *q will have same value
    cout<< *q <<endl;

    return 0;
}