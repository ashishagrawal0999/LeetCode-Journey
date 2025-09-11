#include<iostream>
#include<map>

using namespace std;
int main(){

    map<string,int> m;

    m["tv"] = 5;
    m["laptop"] = 10;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.erase("tv");

    for(auto p: m){         // m is name of map
        cout<<p.first<<" "<<p.second<<endl;  // p.first is key and p.second is value
    }                                           // lexographically answer ascending order me aayega mtlb keys alphabetically arrange honge aur uske corresponding answer honge
    
    cout<<"count is "<<m.count("laptop")<<endl;

    if(m.find("tablet") != m.end() ){
        cout<<"found"<<endl;
    } else {
        cout<<"not found";
    }

    return 0;


}