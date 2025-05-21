#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define ll long long
#define ii pair<ll,ll>
#define fi first
#define se second
#define vi vector<int>

const int N = 3e5+9, mod = 1e9+7,BLK=400;

int n;
ll dt[2020];

int can(ll x){
    if(n%2==0){
        for(int i=1;i<n;i+=2){
            if(dt[i]-dt[i-1]>x) return 0;
        }
        return 1;
    }

    for(int i=0;i<n;i++){
        if(i&1) continue;
        if(!i || i==n-1 || dt[i-1]<dt[i]-1){
            int ys=1;
            for(int j=i+2;j<n;j+=2){
                if(dt[j]-dt[j-1]>x) ys= 0;
            }
            for(int j=1;j<i;j+=2){
                if(dt[j]-dt[j-1]>x) ys=0;
            }
            if(ys) return 1;
        }
    }

    return 0;
}

void solve(int cn) {
    cin>>n;

    for(int i=0;i<n;i++) cin>>dt[i];

    ll lo=0,hi=2e18;
    while(hi!=lo){
        ll mid=(hi+lo)/2;
        if(can(mid)) hi=mid;
        else lo=mid;
    }

    cout<<hi<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    cin >> tc;

    for(int cn=1;cn<=tc;cn++) solve(cn);

}