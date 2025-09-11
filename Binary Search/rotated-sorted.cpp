#include<iostream>
#include<vector>
using namespace std;


int rotatedSorted(vector<int> arr, int target){

    int n = arr.size();
    int st = 0 , end = n-1;

    while(st<=end){
        int mid = st + (end - st)/2;

        if(target == arr[mid]) {
            return mid;
        } else if(arr[st]<=arr[mid])

    }
}

int main(){

    vector<int> arr = {4,5,6,7,0,1,2};
    


}