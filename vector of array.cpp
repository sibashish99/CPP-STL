#include<bits/stdc++.h>
using namespace std;
void printVec (vector <int>&v)
{
  for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << endl;
    }

}

int main ()  // vector of array
{
  int N;
  cin >> N;

  vector <int>v[N];
  for (int i = 0; i < N; i++){
      int n;
      cin >> n;
      for (int j = 0; j < n; j++){
	  int x;
	  cin >> x;
	  v[i].push_back (x);
	 }
   }
  for (int i = 0; i < N; i++){
      printVec (v[i]);
    }
}
