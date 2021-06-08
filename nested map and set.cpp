//eg of nested map and set
//The monk and class marks hackerearth
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        map<int,multiset<string>> m;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int mark;
            string name;
            cin>>name>>mark;
            m[mark].insert(name);
        }
        auto it=--m.end();
        while(true){
            auto &student=(*it).second;
            int mark=(*it).first;
            for(auto st:student){
                cout << st <<" "<< mark <<endl;
            }
            if(it==m.begin()) break;
            it--;
        }
    }
}
