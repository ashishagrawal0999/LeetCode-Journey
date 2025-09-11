#include<iostream>
using namespace std;


// function for factorial logic 

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

// function to calculate nCr

int fact_nCr(int n , int r){

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n/(fact_r*fact_nmr);

}
 
// main function fact_nCr wale function ko call kr rha aur fact_nCr wala function factorial wale function ko call kr rha

int main(){
    int n = 6 , r =2;
    cout<<fact_nCr(n,r)<<endl;
     return 0;

}
