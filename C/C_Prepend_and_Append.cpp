#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int x,int y){
    if(x==0)return y;
    return gcd(y,x%y);
}

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int l=0,r=n-1;
    while(l<r){
        if(s[l]!=s[r]){
            n-=2;
        }else break;
        l++;r--;
    }
    cout<<n<<endl;
}

signed main(){
    
    int t;cin>>t;
    while(t--){
        solve();
    }
}