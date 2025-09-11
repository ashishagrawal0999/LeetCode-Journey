#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 ={1,2,3,4,5,6,7,8};
    vector<char> vec2 ={'A','B','C','D','E'};

    for(int val : vec1){ // for each loop for vector of int datatype
        cout<<val<<endl;
    }

    for(char val: vec2){ // for each loop for vector of char datatype
        cout<<val<<endl;
    }

    return 0;
}