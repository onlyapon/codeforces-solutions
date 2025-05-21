#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
        vector<int> v;
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            mp[x]++;
            if (mp[x]==1)
            {
                v.push_back(x);
            }
            
        }
        sort(v.begin(),v.end());
        // for(auto i:v)cout<<i;
        for (int i = 0; i < v.size(); i++)
        {
            if(mp[v[i]]>=2){
                for (int j = i+1; j < v.size()-2; j++)
                {
                    if (v[i]*2+v[j]>v[j+1])
                    {
                        cout<<v[i]<<" "<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<endl;
                        return;
                    }
                    
                }
                
               
            }
        }
        cout<<-1<<endl;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}