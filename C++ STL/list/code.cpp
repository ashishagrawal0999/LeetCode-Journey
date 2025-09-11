#include<iostream>
#include<list>

using namespace std;
int main(){

    list<int> li;

    li.push_back(2);
    li.push_front(1);

    // using for each loop

    for(int vals: li){
        cout<<vals<<" ";
    }

    cout<<endl;

    return 0;

}