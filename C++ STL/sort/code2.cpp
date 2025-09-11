#include<iostream>
#include<vector>

using namespace std;

int main(){

    // vector of pair

    vector<pair<int,int>> vect2 ={{3,1},{7,1},{2,1},{5,2}};

    sort(vect2.begin(),vect2.end());

    for(auto p: vect2){
        cout<<p.first<<" "<<p.second<<endl;  // sorted on the basis of first value

    }

    cout<<endl;

}

bool comparator (pair<int,int> p1, pair<int,int> p2){

    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;


    if(p1.first<p2.first) return true;
    else return false ;


}