#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b){
    if(b==0 ) return a;
    else
       return gcd(b,a%b);
}

int main(){
    ll n,m,f;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (i!=0)
        {
           a[i]=abs(a[i]-a[0]);
        }
        
    }
    ll g=0;
    for (int i = 1; i < n; i++)
    {
        g=__gcd(g,a[i]);
    }

    for (int  i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout<<__gcd(g,a[0]+b[i])<<" ";
    }
    

    
    
    
}