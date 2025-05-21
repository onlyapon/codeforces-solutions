#include <bits/stdc++.h>
using namespace std;

void solve(){
 
    int n, k;
    cin >> n >> k;
 
    for(int i=1; i<=n; i++) cin >> a[i];
 
    if(n-k == 0){
        vector<int>b(1, 0);
        for(int i=1; i<=n; i++) if(i % 2 == 0) b.push_back(a[i]);
        debug(b);
        for(int i=1; i<=n/2; i++){
            if(b[i] != i){
                cout << i << "\n";
                return;
            }
        }
        cout << n/2 + 1 << "\n";
        return;
    }
 
    int j = INF;
 
    for(int i=2; i<=n; i++){
        if(a[i] != 1){
            j = i;
            break;
        }
    }
 
    if(j-2 > n-k) cout << "2\n";
    else cout << "1\n";
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}