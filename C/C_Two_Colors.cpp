#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,m;cin>>n>>m;
        vector<int> v(m);
        for(auto &i:v)cin>>i;
        sort(v.begin(),v.end());
        int ans=0;
        for (int i = 1; i < n; i++)
        {
            int x=m-(lower_bound(v.begin(),v.end(),i)-v.begin());
            int y=m-(lower_bound(v.begin(),v.end(),n-i)-v.begin());
            ans+=(1LL*x*y-min(x,y));
        }
        cout<<ans<<endl;
    }
    
}