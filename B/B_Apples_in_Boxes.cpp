#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    int mn=1e9;
    int mx=-1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mn=min(mn,v[i]);
        mx=max(mx,v[i]);
    }

    sort(v.rbegin(),v.rend());

    for (int i = 0; i < n; i++)
    {
        if(v[i]-mn-1>k and i==0){
            cout<<"Jerry\n";
            return;
        }else if(v[i]-mn>k and i!=0){
            cout<<"Jerry\n";
            return;
        }
    }
    
    
    
    int sum=accumulate(v.begin(),v.end(),0);
    if(sum%2==0)
        cout<<"Jerry\n";
    else cout<<"Tom\n";
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
        
    }
}   