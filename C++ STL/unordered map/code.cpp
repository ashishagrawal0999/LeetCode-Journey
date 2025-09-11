#include<iostream>
#include<map>

using namespace std;
int main(){

   unordered_map<string,int> m;

   m.emplace("tv",100);
   m.emplace("speaker",50);
   m.emplace("fridge",60);
   m.emplace("laptop",75);

  
    for(auto p: m){         // m is name of unordered map
        cout<<p.first<<" "<<p.second<<endl;  // p.first is key and p.second is value
    }   

}


