#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
        vector<int> v(n);
        for (int  i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int cnt=0;
        for (int i = 1; i < n-1; i++)
        {
            if(v[i]>v[i+1] and v[i-1]<v[i]){
                cnt++;
            }
        }
        if(is_sorted(v.begin(),v.end()) or v[0]==1) cout<<"YES\n";
        else cout<<"NO\n";
    
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
        
    }
}