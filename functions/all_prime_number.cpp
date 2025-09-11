#include<iostream>
using namespace std;

void primeNums(int n){
    for(int i =2; i<=n;i++){
        bool isPrime = true;
       for(int j=2 ; j<i;j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime==true){
                cout<<"prime no. is"<<i<<endl;
            }
    }
}

int main(){
    int n = 10;
    primeNums(n);

    return 0;
}