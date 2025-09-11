#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(56);
    vec.push_back(98);
    vec.push_back(78);

    cout<<vec.size()<<endl;        // 3
    cout<<vec.capacity()<<endl;    // 4

    vec.push_back(88);        
    vec.push_back(66);

    cout<<vec.size()<<endl;        // 5 --> after pushing 88 , 66
    cout<<vec.capacity()<<endl;    // 8

    return 0;
}
