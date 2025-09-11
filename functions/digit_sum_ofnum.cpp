#include<iostream>
using namespace std;

int main(){
    int digitsum = 0;
    int num = 234;
    while(num>0){
        int digit = num%10;
        digitsum = digitsum + digit;
        num = num/10;
    }

    cout<<digitsum;
    return 0;
}