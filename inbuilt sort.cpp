//in built sort sort(a,a+n) -> for array 
// or sort(a.start(),a.end()) -> vector


// #include <bits/stdc++.h>	//using comnparator
// using namespace std;
// bool should_swap (pair < int, int >a,pair<int ,int> b){
//   if(a<b) return true;
//   return false;
// }
// int main(){
//   int n;
//   cin >> n;
//   vector<pair<int,int>>a(n);
//   for (int i = 0; i < n; i++){
//       cin >> a[i].first >> a[i].second;
//     }
//   for (int i = 0; i < n; i++){
//       for (int j = i + 1; j < n; j++){
// 	  if (should_swap (a[i], a[j])){
// 	      swap (a[i], a[j]);
// 	    }
//       }
//     }
//   for (int i = 0; i < n; i++){
//       cout << a[i].first << " " << a[i].second << endl;
//     }
// }

#include <bits/stdc++.h>	//next greater element
using namespace std;
bool should_swap (pair < int, int >a,pair<int ,int> b){
    
  if(a.first!=b.first){
      if(a.first>b.first) return true;
      return false;
  }
  else{
      if(a.second<b.second) return true;
      else false;
  }
//   if(a>b) return true;
//   return false;
}
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>>a(n);
  for (int i = 0; i < n; i++){
      cin >> a[i].first >> a[i].second;
    }
//   for (int i = 0; i < n; i++){
//       for (int j = i + 1; j < n; j++){
// 	  if (should_swap (a[i], a[j])){
// 	      swap (a[i], a[j]);
// 	    }
//       }
//     }
 sort(a.begin(),a.end(),should_swap); //comparator function
  for (int i = 0; i < n; i++){
      cout << a[i].first << " " << a[i].second << endl;
    }
}
