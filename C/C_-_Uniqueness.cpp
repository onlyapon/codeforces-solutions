#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    set<int> s;
    unordered_map<int,int> um;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
        um[v[i]]++;
    }
    
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        if(um[*it]==1){
            cout<<find(v.begin(),v.end(),*it)-v.begin()+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
}