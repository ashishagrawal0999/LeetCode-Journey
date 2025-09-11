#include<iostream>
using namespace std;


int sum(int a , int b){
    a = a+5;
    b = b+5;
    return a+b;
}

int main(){
    int a = 1 , b = 2 ;
    cout<<sum(6,7)<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}