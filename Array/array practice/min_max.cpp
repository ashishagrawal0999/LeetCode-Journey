#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int nums[] ={78,89,98,65,77};
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        smallest = min(smallest , nums[i]);
        largest = max(largest,nums[i]);
    }

 

    cout<<"smallest is : "<<smallest<<endl;
    cout<<"largest is : "<<largest<<endl;

    return 0;
}