#include<iostream>
#include<queue>
using namespace std;

int main(){

    // reverse order prioity queue --> minimum element at the top
    priority_queue<int , vector<int>, greater<int>> pq;

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
