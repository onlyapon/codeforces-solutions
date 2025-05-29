#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int zero=0,one=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='0')
        {
            zero++;
        }else one++;   
    }

    int max_possible=floor(1.00*(one/2))+floor(1.00*(zero/2));
    int min_possible=max(zero,one)-n/2;
    if(max_possible>=k and min_possible<=k){
        if ((k-max_possible)%2==0)
        {
            cout<<"YES\n";
        }else cout<<"NO\n";
    }else cout<<"NO\n"; 
    
}


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}