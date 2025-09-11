#include<iostream>
#include<queue>
using namespace std;

int main(){

    // prioity queue --> maximum element at the top
    priority_queue<int> pq;

    pq.push(5);
    pq.push(4);
    pq.push(10);
    pq.push(12);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<endl;
}

