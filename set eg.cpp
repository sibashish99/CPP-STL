#include<bits/stdc++.h>
using namespace std;
int main(){
   set<string> s;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       string str;
       cin>>str;
       s.insert(str);
   }
   cout<<"res:\n";
   for(auto value: s){
       cout<<value<<endl;
   }
}