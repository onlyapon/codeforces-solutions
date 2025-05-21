#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n);
    set<int> s;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
        mp[v[i]]++;
    }
    while (!s.empty())
    {
        int mn=*s.begin();
        if (mp[mn]==1)
        {
            cout<<"No\n";
            return;
        }
        mp[mn+1]+=(mp[mn]-2);
        s.erase(mn);
        if (mp[mn+1])
        {
            s.insert(mn+1);
        }
        mp[mn]=0;
    }
    cout<<"Yes\n";
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
        
        
    }
    
}