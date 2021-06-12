#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    // s.push(3);
    // s.push(5);
    // s.push(4);
    // s.push(1);
    // s.push(7);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
