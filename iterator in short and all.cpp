#include <bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v={1,2,3,4,5,6,7}; 
    
    // vector<int> :: iterator it= v.begin();  //iterator // alternate is auto
    // cout<<"First element "<<(*it)<<endl;
    // for(it=v.begin(); it!=v.end() ;it++){
    //     cout<<(*it)<<" ";
    // }
 
    
    // for(int val: v){  //iterator in short
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    
    // alternate of auto
    // will not need to write vector<int> :: iterator it;
    // for(auto val: v){  //iterator in short
    //     cout<<val<<" ";
    // }
    
    // for pair 
    
    vector<pair<int ,int>> v_p={{1,2},{2,3},{3,4},{4,5}};  
    vector<pair<int,int>> :: iterator it; // alternate is auto 
    
     for(it=v_p.begin(); it!=v_p.end();it++){
         cout<<it->first<<" "<<it->second<<endl;
     }
    
    for(pair<int,int> val: v_p){
        cout<<val.first<<" "<<val.second<<endl;
    }
    // alternate
    for(auto val: v_p){
        cout<<val.first<<" "<<val.second<<endl;
    }
}

