#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
        }
       int ans=-1e9;
        for (int i = 0; i < n; i++)
        {
            int cur=1;
            for (int j = i+1; j < n; j++)
            {
                if(v[i]>=v[j])cur++;
            }
            ans=max(ans,cur);
        }
       cout<<n-ans<<endl;
    }
    
}