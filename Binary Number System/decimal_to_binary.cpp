#include<iostream>
using namespace std;

int deciToBinary(int decNum){
   int  answer = 0 , power = 1;

    while(decNum >0){
       int rem = decNum % 2;
       answer = answer + (rem * power );

       decNum = decNum / 2;
       power = power * 10;

    }

    return answer;

}

int main(){
    int decNum = 50;
    for(int i = 1; i<=10; i++){
      cout << deciToBinary(i) <<endl;
    }
    

    return 0;

 }
