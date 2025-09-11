#include<iostream>
using namespace std;


int changeX(int x){
    x = 2*x;
    cout<<"x="<<x<<endl;
}

int main(){
    int x = 5;
    cout<<changeX(x);

    cout<<"x="<<x<<endl;
    return 0;
}