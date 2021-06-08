
#include <bits/stdc++.h>
using namespace std;
void displayVec(vector<int> v){
    cout <<"Size: "<< v.size()<< endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;  //vector 
    // int n;
    // cin>>n;
    
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    v.push_back(14);
    v.push_back(55);
    v.push_back(134);
    v.push_back(78);
    v.push_back(19);
    displayVec(v);
    v.pop_back();
    displayVec(v);
    vector<int> v2=v;
    v2.push_back(111);
    displayVec(v2);
    
}
