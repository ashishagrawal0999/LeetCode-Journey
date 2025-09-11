#include<iostream>
using namespace std;
int binToDecimal(int binNum){
    int answer = 0, power =1;

    while (binNum>0){
        int rem = binNum % 10;
        answer = answer + (rem * power);

        binNum = binNum/10;
        power = power *2;

    }
        return answer;

}
  
    int main(){
        cout<<binToDecimal(101)<<endl;
        return 0;
    }
