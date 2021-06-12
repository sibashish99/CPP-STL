// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    
//     queue<string> q;
//     q.push("abc");
//     q.push("abc");
//     q.push("abc");
//     q.push("abc"); 
//     q.push("abc");

//     while(!q.empty()){
//         cout<<q.front()<<endl;
//         q.pop();
//     }       
    
// }


#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
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

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

