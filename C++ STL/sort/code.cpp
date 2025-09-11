#include<iostream>
using namespace std;

int main(){

    // array 
    int arr[5] = {2,6,3,5,8};
    sort(arr,arr+5);

    for(int val : arr){
        cout<<val<<" ";
    }

    cout<<endl;

    // vector
    vector<int> vect ={3,5,1,8,2};
    sort(vect.begin(),vect.end());

    for(int vals: vect){
        cout<<vals<<" ";

    }

    cout<<endl;

    // vector in decreasing order

    sort(vect.begin(),vect.end(),greater<int>());

    for(int vals: vect){
        cout<<vals<<" ";

    }

    cout<<endl;

    return 0;

}