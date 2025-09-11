
#include<iostream>
#include<vector>
using namespace std;

void changeA(int a){        // pass by value

    a = 20;
    cout<<" a in changeA function : "<<a<<endl;

}


int main(){
    int a = 10;

    changeA(a);
    cout<<" a in main function : "<<a<<endl;

    return 0;
}