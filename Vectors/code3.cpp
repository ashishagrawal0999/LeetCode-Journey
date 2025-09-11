#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums ={1,1,4,5,5,5};
    int ans = 0;

    for(int val: nums){
        ans = val & val;       

    }

    cout<<ans<<endl;

    return 0;
}

