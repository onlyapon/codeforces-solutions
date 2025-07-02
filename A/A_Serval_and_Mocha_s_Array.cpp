#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int x,int y){
    if(x==0)return y;
    return gcd(y,x%y);
}

void solve(){
    int n,cnt=0;
        cin>>n;
        vector<int> v;
        int g=0;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v.push_back(x);

        }
        
       for(int i = 0; i < n; i++) for(int j = i+1; j < n; j++) if(gcd(v[i], v[j]) <= 2){
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
}

signed main(){
    
    int t;cin>>t;
    while(t--){
        solve();
    }
}