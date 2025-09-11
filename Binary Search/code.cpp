#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr , int target){

    int st = 0 , end = arr.size()-1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if( target > arr[mid] ){
            st = mid + 1;                       // 2nd half
        } else if( target < arr[mid] ){
            end = mid - 1;                      // 1st half
        } else {
            return mid ;   // ans
        }
    }

    return -1 ;

}

int main(){

    // vector<int> vec1 = {-1,0,3,4,5,9,12};
    // int target1 = 12;

    // cout<<binarySearch(vec1 , target1)<<endl;


    vector<int> vec2 = {-1,0,3,5,9,12};
    int target2 = 0;

    cout<<binarySearch(vec2 , target2)<<endl;

    return 0;

}