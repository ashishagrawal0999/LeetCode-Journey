#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> de = {1,2,3,4};

    for(int val: de){
        cout<<val<<" ";
    }

    cout<<endl;

    cout<<de[3]<<endl;

    return 0;
}