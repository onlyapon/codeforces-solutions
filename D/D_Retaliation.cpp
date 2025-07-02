#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n;
    vector<int> v(n);
    vector<int> ans;
    map<int,int> mp;
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]%(i+1)!=0 and (v[i]%(i+1))%(n-i+2)!=0){
            flag=false;
        }
        // mp[v[i]]++;
    }
    if(flag==true)cout<<"YES\n";
    else cout<<"NO\n";
    
}
    
signed main(){
    int t;cin>>t;
    while(t-- ){
        solve();
    }
}