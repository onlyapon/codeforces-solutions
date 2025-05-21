#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,a,b;cin>>n>>m>>a>>b;
    int  ans1=1,b1=b,a1=a;
    a=min(n-a+1,a),b=m;
    while (b!=1)
    {
        b=(b+1)/2;
        ans1++;
    }
    while (a!=1)
    {
        ans1++;
        a=(a+1)/2;
    }
    int ans2=1;
    b=min(m-b1+1,b1),a=n;
    while (b!=1)
    {
        b=(b+1)/2;
        ans2++;
    }
    while (a!=1)
    {
        ans2++;
        a=(a+1)/2;
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