#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;cin>>n;
   vector<int> a,b,res;
   for (int i = 0; i < n; i++)
   {
    int x,y;cin>>x;
    a.push_back(1<<x);
   }
   for (int i = 0; i < n; i++)
   {
    int x,y;cin>>y;
    b.push_back(1<<y);
   }
   res.push_back(a[0]+b[0]);
   for (int i = 1; i < n; i++)
   {
    
   }
   
   
   for(auto i:a)cout<<i<<" ";
   cout<<endl;
   for(auto i:b)cout<<i<<" ";
   cout<<endl;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}