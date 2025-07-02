#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int mx=1,anx=1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==1){
            mx=i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i]==1){
            anx=i;
            break;
        }
    }
    if((x)>=(anx-mx+1)) cout<<"YES"<<endl;
    else cout<<"NO\n";
    
}
    
signed main(){
    int t;cin>>t;
    while(t-- ){
        solve();
    }
}