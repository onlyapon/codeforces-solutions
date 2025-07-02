#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b,c,d;cin>>a>>b>>c>>d;
   int x=min(a,c);
   int y=min(b,d);
   if(x>=y)cout<<"Gellyfish\n";
   else cout<<"Flower\n";
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}