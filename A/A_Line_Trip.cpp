#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans=v[0];
        for (int i = 0; i < n-1; i++)
        {
            ans=max(ans,v[i+1]-v[i]);
        }

        if(n==1)ans=v[0];
        ans=max(ans,(x-v[n-1])*2);
        
        cout<<ans<<endl;
    }
}