#include<bits/stdc++.h>
using namespace std;
bool isPos(int x){
    return x>0;
}
int main(){
 //   auto sum= [](int x,int y){return x+y;};  //Inbuilt STL Algorithms & Lambda Function 
 //   cout<<sum(2,3);

   vector<int> v={2,3,4,5,6,7};
   cout<<all_of(v.begin(),v.end(),[](int x){return x>0;}); //all_of() retrun 1 or 0
   cout<<endl;
   cout<<all_of(v.begin(),v.end(),isPos);
   cout<<endl;
   
   cout<<any_of(v.begin(),v.end(),[](int x){return x>0;}); //any_of() retrun 1 or 0
   cout<<endl;
   cout<<any_of(v.begin(),v.end(),isPos);
   cout<<endl;
   
   cout<<none_of(v.begin(),v.end(),[](int x){return x>0;}); //none_of() retrun 1 or 0
   cout<<endl;
   cout<<none_of(v.begin(),v.end(),isPos);
   cout<<endl;
   
}
