#include <bits/stdc++.h>
using namespace std;
void printVal(unordered_set<string> &s){
    for(string value: s){
       cout<<value<<endl;
    }
    // cout<<"Alternate way:"<<endl;
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}
int main(){
   unordered_set<string> s;
   s.insert("abc");
   s.insert("adffwe");
   s.insert("jsdgdvb");
   
   auto it=s.find("abc");
   if(it!=s.end()){
       cout<<(*it);
   }
   cout<<"\nValues:\n";
   printVal(s);
}
