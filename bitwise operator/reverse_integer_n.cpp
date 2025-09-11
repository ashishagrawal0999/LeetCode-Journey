#include<iostream>
using namespace std;
int main(){

    int num = 125;
    int rev_of_num = 0;  // reverse of num
    int rem = 0;

    while (num>0){
        rem = num % 10;    
        rev_of_num = rem + rev_of_num*10;
        num = num / 10;
 
    }
 

    cout<<rev_of_num;

    return 0;
}

