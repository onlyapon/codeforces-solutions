#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,m,p,q;cin>>n;
        vector<int> v(n);
        int mx=-1e9;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
            mx=max(mx,-v[i]);
        }
        int f=v[0];
        if (n==1)
        {
            cout<<"YES\n";
            continue;
        }
        
        cout<<mx<<endl;
        if (abs(f)!=mx)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        



        
    }
    
}