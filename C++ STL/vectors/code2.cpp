#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec1(3,10);
    // vector<int> vec2(vec1); // storing the values of vec1 in vec2

    // vec2.erase(vec2.begin()+2);
    
    // for(int val: vec2){
    //     cout<<val<<" ";
    // }

    // cout<<endl;


    vector<int> vect ={1,2,3,4,5,6};

    vect.clear();

    vect.erase(vect.begin()+1,vect.begin()+3);
    vect.insert(vect.begin()+2,36);

    for(int vals : vect){
        cout<<vals<<" ";

    }

    cout<<endl;

    cout<<"is empty "<<vect.empty()<<endl;


    return 0;
}