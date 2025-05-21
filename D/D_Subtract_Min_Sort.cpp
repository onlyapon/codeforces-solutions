#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
        vector<int> v(n);
        vector<int> vv(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            vv.push_back(v[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            if (v[i]>v[i+1])
            {
                cout<<"NO\n";
                return;
            }else{
                v[i+1]-=v[i];
            }
            
        }
        cout<<"YES\n";
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}