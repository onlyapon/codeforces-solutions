#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
    int n;cin>>n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<v[5]<<v[6];
   
    
}

vector<bool> v(1e9,true);

void sieve(){
    for (int i = 2; i < 1e9; i++)
    {
        if(v[i]){
            for (int j=i*i;j< 1e9; j+=i)
            {
                v[j]=false;
            }
            
        }
    }
    
}

signed main(){
    sieve();
    int t;cin>>t;
    while(t--){
        solve();
        
    }
}