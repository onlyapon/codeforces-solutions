#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if (n==1 and b==1 and a==1)
        {
            cout<<"YES\n";
            continue;
        }
        if (a==n and b==n)
        {
            cout<<"YES\n";
            continue;
        }
        
        if (a+b>n or a+b+2>n)
        {
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        
    }
    
}