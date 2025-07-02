#include <bits/stdc++.h>
using namespace std;
#define int long long

 
void solve () {
    int n;cin>>n;
    vector<int> vv(n);
    int cnt=1;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>vv[i];
        if(mp.count(vv[i])){

        }else{
            mp[vv[i]]=1;
        }
        if(vv[i-1]==vv[i] and i!=0)
        {
            cnt++;
            mp[vv[i]]=max(cnt,mp[vv[i]]);
        }else{
            cnt=1;
        }
    }
    int mx=1;
    int ans=LLONG_MAX;
    for(auto [i,j]:mp){
        ans=min(ans,1ll*i*(n-j));
    }
    cout<<ans<<endl;
}
 
signed main () {
  ios::sync_with_stdio(false);
  cin.tie(0);
 

  int testc;
  cin >> testc;
 
  for (int i = 0; i < testc; i++) {
    solve();
  }
}
 