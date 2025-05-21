#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    map<int,int> mp;
   
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
       
    }
    int mx=-1e9;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,mp[v[i]]);
    }
    cout<<n-mx<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
        
        
    }
    
}