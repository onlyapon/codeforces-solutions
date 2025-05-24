#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n;cin>>n;
   vector<int> v;
   int sum,mx=-1e9,mn=1e9,odd=0;
   for (int i = 0; i < n; i++)
   {
        int x;cin>>x;
        v.push_back(x);
       
   }
   sort(v.begin(),v.end());
   int ans1=1e9,ans2=1e9;
   if ((v[0]+v[n-1])%2==0)
   {
        cout<<0<<endl;
        return;
   }
   
   for (int i = 0; i < n; i++)
   {
        if ((v[i]+v[n-1])%2==0)
        {
            ans1=i;
            break;
        }
   }
   for (int i = n-1; i>=0; i--)
   {
        if ((v[i]+v[0])%2==0)
        {
            ans2=n-1-i;
            break;
        }
   }
   cout<<min(ans1,ans2)<<endl;
   
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}