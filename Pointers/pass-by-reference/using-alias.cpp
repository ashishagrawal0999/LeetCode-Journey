#include<iostream>
#include<vector>
using namespace std;

void changeA(int &b){        // pass by value

    b = 20;
    cout<<" a in changeA function : "<<b<<endl;

}


int main(){
    int a = 10;

    changeA(a);
    cout<<" a in main function : "<<a<<endl;

    return 0;
}