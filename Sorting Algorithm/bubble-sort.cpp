#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int n ){
    for (int i=0 ; i<n-1 ; i++ ){

        bool isSwap = false;                // 


        for( int j=0; j<n-i-1; j++ ){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;            // true is if elements are swapped
            }
        }

        if(isSwap == false){                      // array is already sorted
            return ;
        }                      
    }
}


void selectionSort(int arr[] , int n ){
    for(int i = 0; i<n-1 ; i++ ){               // start of unsorted part
        int smallestIndex = i;

        for(int j = i+1 ; j<n ; j++){
            if( arr[j] < arr[smallestIndex] ){
                smallestIndex = j;              // finding smallest 
            }
        }

        swap( arr[smallestIndex] , arr[i] );    // swapping it with ith element of unsorted part
    }
}

void insertionSort(int arr[] , int n){
    for(int i = 1; i<n-1 ; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;         // placing the current element in its correct position

    }
}




void printArray(int arr[] , int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    cout<<endl;
}


int main(){

    int n = 5;
    int arr[] = {4,1,5,2,3};

    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;

}