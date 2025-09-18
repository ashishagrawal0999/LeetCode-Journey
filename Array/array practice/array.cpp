#include<iostream>
using namespace std;
int main(){

    int marks[5] = { 100,98,89,92,96 };
    int size = 5;

    // loop : 0 to size-1
    
    for(int i=0; i<size; i++){
        cin>>marks[i];
    }
    // i is index , which is starting from 0 and going till size-1 index
     
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    return 0;

}