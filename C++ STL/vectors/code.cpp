#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; //0
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.emplace_back(40);
    vec.pop_back();

    for(int val: vec){
        cout<<val<<endl;
    }
    cout<<vec.size()<<endl;

    cout<<"value at index 2 is "<<vec.at(2)<<" or "<<vec[2]<<endl;
    cout<<"at front : "<<vec.front()<<" "<<"at back : "<<vec.back()<<endl;


    return 0;
}
