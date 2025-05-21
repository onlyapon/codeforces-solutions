#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
        vector<int> v;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        if (s.size()==1)
        {
            cout<<"YES\n";
            return;
        }
        
        if (n==2)
        {
            if (v[1]==v[0])
            {
                cout<<"YES\n";
                return;
            }
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if (v[i]==v[i+1] and i==0 and v[i]==0)
            {
                cout<<"YES\n";
                return;
            }else if(v[i]==0 and v[i+1]==0){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}