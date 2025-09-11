#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
        cout<<"size is : "<<vec.size()<<endl;  // 0 --> size when vector is empty

        vec.push_back(36);
        vec.push_back(38);
        vec.push_back(78);
        cout<<"after pushback size = "<<vec.size()<<endl; // 3 --> size after pushing elements

        vec.pop_back(); // 78 is popped out
        cout<<"after popback size ="<<vec.size()<<endl;  // 2 --> size after popping elements

        for(int val: vec){      // for each loop
            cout<<val<<endl;    // 36 , 38
        }

       
        cout<<vec.front()<<endl;                         // 36
        cout<<vec.back()<<endl;                          // 38
        cout<<vec.at(0)<<endl;                           // 36
}