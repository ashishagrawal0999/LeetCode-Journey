#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int nums[5] = { 77,82,52,67,84 };
    int largest = INT_MIN;
    int index = -1;

    for(int i=0; i<size; i++){
        if(nums[i]>largest){
            largest = nums[i];
            index = i;

        }
    }

    cout<<"largest is : "<<largest<<" And the index is :"<<index<<endl;
}