#include<iostream>
using namespace std;

int multiplyNum(int a , int b){
    int c = a*b;
    return c;
}

int main(){

    // Iss line se compiler ko yeh toh pata chala ki function call hua, par agar tum uska result use nahi karte (jaise print ya store nahi karte), toh wo kaam toh karega, par output nahi dikhayega, aur ye line compiler ke liye waste ho jaati hai.

    // multiplyNum(5,6);


    // So , when we want to return something , instead of calling and invoking separately , store & then print or directly print the function 
   
    int result = multiplyNum(5,6);
    cout<<result;
    return 0;
}