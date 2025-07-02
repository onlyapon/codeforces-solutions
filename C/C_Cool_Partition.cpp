#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n;
    vector<int> v(n);
    vector<int> ans;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    // int mx=-1e9,mx2=-1e9;
    
    // sort(ans.rbegin(),ans.rend());

    cout<<mp[v[0]]<<endl;
}
    
signed main(){
    int t;cin>>t;
    while(t-- ){
        solve();
    }
}