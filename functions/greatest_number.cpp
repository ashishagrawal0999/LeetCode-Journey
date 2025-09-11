#include<iostream>
using namespace std;

int maxx(int a , int b ){
    if(a>b){
        return a ;
    }  else {
        return b ;
    }
}

int main(){
    cout<<maxx(6,8)<<" ";
    return 0;
}


