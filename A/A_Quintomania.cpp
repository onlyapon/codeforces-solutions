#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        for (int i = 0; i < n-1; i++)
        {
            if (abs(v[i]-v[i+1])!=5 and abs(v[i]-v[i+1])!=7)
            {
                cout<<"NO\n";
                // cout<<v[i]<<v[i+1]<<endl;
                return;
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