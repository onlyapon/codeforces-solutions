#include <bits/stdc++.h>
using namespace std;

void solve(){
    string p,s;cin>>p>>s;
    int x=0;
    if(s.length()<p.length() or s.length()>p.length()*2){
        cout<<"NO\n";
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {

        if(s[i]!=p[x]){
            cout<<"NO\n";
            return;
        }else{
            if(s[i+1]==p[x])i++;
            if(i==(s.length()-1) and x==p.length()-2){
                cout<<"NO\n";
                return;
            }
        }
        if (x>(p.length()-1))
        {
            cout<<"NO\n";
            return;
        }
        x++;
        
    }
    
    
    cout<<"YES\n";
    return;

}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}