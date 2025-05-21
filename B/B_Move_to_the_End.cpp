#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<long long> v(n);
        for(long long &i:v)cin>>i;
        long long sum=accumulate(v.begin(),v.end(),0ll);
        
        vector<long long> ans;
        ans.push_back(sum);
        long long mx=v[0];
        for (int i = 1; i < n; i++)
        {
            sum=sum-v[i-1];
            mx=max(v[i],mx);
            ans.push_back(sum-v[i]+mx);
        }
        reverse(ans.begin(), ans.end());
        for(auto i:ans)cout<<i<<" ";
        cout<<endl;
        
    }
    
}