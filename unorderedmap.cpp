#include <bits/stdc++.h>
using namespace std;
void printMap(unordered_map<int,string> &m){
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;    //O(log n)
    } 
}
int main()
{
    unordered_map<int, string> m ;
    m[1]="abc";   //O(log N)
    m[2]="bcd"; 
    m[3]="acd";
    
    m.insert({4,"afg"});
   
    printMap(m);
   
}
