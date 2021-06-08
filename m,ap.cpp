#include <bits/stdc++.h>
using namespace std;
void printMap(map<int,string> &m){
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;    //O(log n)
    } 
    
    //alternate
    cout<<"Alternate method using auto"<<endl;
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int, string> m ;
    m[1]="abc";   //O(log N)
    m[2]="bcd"; 
    m[3]="acd";
    
    m.insert({4,"afg"});
    auto it=m.find(3);  //O(log n)
   
    if(it==m.end()){
        cout<<"nop value";
    }
    else{
         cout << "Iterator points to " << it->first <<   
      " = " << it->second << endl;  
    }
    m.erase(3);
    printMap(m);
    m.clear();
}
