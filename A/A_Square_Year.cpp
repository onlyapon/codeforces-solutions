#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
        cin>>s;
        int n=(s[0]-'0')*(1000)+(s[1]-'0')*(100)+(s[2]-'0')*10+(s[3]-'0');
        
        int x=1ll*sqrt(n);
        if(n==0){
            cout<<0<<" 0\n";
            return;
        }
        if(x*x==n){
            cout<<x-1<<" "<<1<<endl;
        }else cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        
    }
    
}