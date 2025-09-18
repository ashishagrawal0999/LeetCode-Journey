#include<iostream>
using namespace std;

void swapMinAndMaxNum(int arr[], int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for(int i =0; i<size; i++){
      if(arr[i]<smallest){
        smallest = arr[i];
        minIndex =i;
      }

      if(arr[i]>largest){
        largest = arr[i];
        maxIndex =i;
      }

    }

    swap(arr[minIndex],arr[maxIndex]);

    
}

int main(){
    int size = 5;
    int arr[] = {78,67,89,56,70};

    swapMinAndMaxNum(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}