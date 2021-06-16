#include <bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=*min_element(v.begin(),v.end()); //min and max element for array start v and end v+n
    cout<<"Min value: "<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<"Max value is: "<<max;
    
    int sum=accumulte(v.begin(),v,end(),0); //sum
    cout<<"sum is "<<sum<<endl;
    
    int ct=count(v.begin(),v.end(),1); //count value
    cout<<"count of 1 is "<<ct<<endl;
    
    auto it= find(v.begin(),v.end(),2); //find
    if(it!=v.end())
       cout<<"Found in "<<it<<endl;
    else
       cout<<"Element not found";
       
     reverse(v.begin(),v.end()); //reverse
     for(auto value:v){
         cout<<value<<" ";
     }
     cout<<endl;
     string s="suhdigfgwui";
     reverse(s.begin(),s.end()); //reverse
     cout<<s<<endl;
     
     
     
}
