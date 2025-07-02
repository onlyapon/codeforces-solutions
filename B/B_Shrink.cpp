#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n;
    int c=n;
    vector<int> ans;
    for (int  i = 1; i <=n; i++)
    {
       ans.push_back(i);
       i++;
    }
    if(n&1)n--;
    for (int  i = n; i>0; i--)
    {
       ans.push_back(i);
       i--;;
    }
    
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}
    
signed main(){
    int t;cin>>t;
    while(t-- ){
        solve();
    }
}