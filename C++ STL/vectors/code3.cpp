#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> vect ={1,2,3,4,5,6};

    vect.clear();

    cout<<"is empty :"<<vect.empty()<<endl;

    vector<int> vect2 ={1,2,3,4,5,6};
    cout<<"begin is "<<*(vect.begin())<<endl;


    vector<int> :: iterator it;

    for(it = vect2.begin(); it!= vect2.end();it++){
        cout<< *(it) <<" ";
    }

    for(auto it = vect2.rbegin(); it != vect2.rend(); it++){
        cout<<*(it)<<endl;
    }

    return 0;
}