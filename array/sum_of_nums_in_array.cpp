#include<iostream>
using namespace std;

void sumAndProductArr(int arr[] , int size){
    int sum =0;
    int product =1;

    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }

    for(int i=0;i<size;i++){
        product = product * arr[i];
    }


    cout<<"sum : "<<sum<<endl;
    cout<<"product : "<<product<<endl;
 
}


int main(){
    int size = 5;
    int arr[] ={1,2,3,4,5};

    sumAndProductArr(arr,size);

    return 0;

}