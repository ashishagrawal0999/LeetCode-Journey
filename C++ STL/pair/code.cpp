#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main(){

    // normal pair

    pair<int , char> p1 ={1,'a'};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    // pair of pair

    pair<int,pair<int,int>> p2 = {1,{2,3}};
    cout<<p2.second.first<<endl;

    // a vector of pair --> just like we craeted vector of integers vector<int> vect = {1,2,3,4};
    // vector of pair --> vector<pair<int,int>> vect = {{1,2},{3,4},{5,6}};

    vector<pair<int,int>> vect = {{1,2},{3,4},{5,6}};

    for(auto p : vect){
        cout<<p.first<<" "<<p.second<<endl;
        //p.first for 1st value of pair and p.second for second value of pair
    }

    // to push pair inside a vector 

    vect.push_back({8,9});  // parethesis is required because it assumes that we have created a pair during the puahback
    // it cannot covert value into pairs

    vect.emplace_back(8,9); // in-place objects create , it can convert value into pair , no parenthisis is required

    return 0;
}


