#include<iostream>
using namespace std;
int main(){
    int size = 6;
    int nums[] = {5,15,22,1,-15,24};
    int smallest = INT_MAX;
    int index = -1;
    for(int i =0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
            // storing the value of i in index , when the get the smallest element
            index = i;
        }
    }

    cout<<"smallest is : "<<smallest<<" And the index is "<<index<<endl;

    return 0;
}