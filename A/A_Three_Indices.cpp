#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
        vector<int> v(n);
        cin>>v[0];
        int first=v[0];
        bool first_f=false;
        int x=1,y,z;
        vector<pair<int,int>> p;
        for (int i = 1; i < n; i++)
        {
            cin>>v[i];
            if (v[i-1]<v[i])
            {
                p.push_back({i,i+1});
            }
             
        }
        for(auto i:p){
            for (int j = i.second; j < n; j++)
            {
                if (v[i.second-1]>v[j])
                {
                    cout<<"YES\n"<<i.first<<" "<<i.second<<" "<<j+1<<"\n";
                    return;
                }
                
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