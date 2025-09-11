#include<iostream>
using namespace std;

int prime_Num(int n){
    bool isPrime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            cout<<"Prime No";
            break;
        } else {
            cout<<"Prime No.";
        }

    }
    return isPrime ;

}

int main(){
    cout<<(prime_Num(6))<<endl;
    return 0;
}

