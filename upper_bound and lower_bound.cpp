// #include <bits/stdc++.h>	//upper_bound and lower_bound for array
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int a[n];
//   for (int i = 0; i < n; i++){
//       cin >> a[i];
//     }
//   sort(a,a+n);

//   int ele;
//   cin>>ele;
//   int *ptr=lower_bound(a,a+n,ele);
//   cout<<(*ptr);
   
//   int *ptr1=upper_bound(a,a+n,ele2);
//   cout<<(*ptr1);
// }

// #include <bits/stdc++.h>	//upper_bound and lower_bound for vector
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   std::vector<int> a(n);
//   for (int i = 0; i < n; i++){
//       cin >> a[i];
//     }
//   sort(a.begin(),a.end());
//   int ele;
//   cin>>ele;
//   auto it=lower_bound(a.begin(),a.end(),ele);
//   if(it==a.end()){
//       cout<<"not found";
//       return 0;
//   }
//   cout<<(*it);
   
//   auto it1=lower_bound(a.begin(),a.end(),ele);
//   if(it==a.end()){
//       cout<<"not found";
//       return 0;
//   }
//   cout<<(*it1);
// }

#include <bits/stdc++.h>	//upper_bound and lower_bound for vector
using namespace std;
int main(){
  int n;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++){
      int x;
      cin >> x;
      s.insert(x);
    }
    int ele;
    cin>>ele;
    auto it= s.lower_bound(ele);
    cout<<(*it);
   
}

