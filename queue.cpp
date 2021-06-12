#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> sym ={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s) {
  std::stack<char> st ;
  for(char brac:s){
      if(sym[brac]<0){
          st.push(brac);
      }
      else{
          if(st.empty()) return "NO";
          char top=st.top();
          st.pop();
          if(sym[top] + sym[brac]!=0){
              return "NO";
          }
      }
  }
  if(st.empty()) return "YES";
  return "NO";
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}
