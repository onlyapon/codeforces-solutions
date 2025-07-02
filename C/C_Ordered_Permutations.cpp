#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    while (t--)
    {
       int n, k;
        cin >> n >> k;
        k *= 2;
        k -= 1;
        int maxx = log2(k);
        // cout << "maxx = " << maxx << "\n";
        if(n <= maxx) {
            cout << "-1\n";
            continue;
        }
    
        int cur_pos = n - 1;
        vector<int> ans(n);
        int l = 0, r = n - 1;
        for(int i = 1; i <= n; i++) {
            if(cur_pos >= 50) {
                ans[l++] = i;
            }
            else {
                if(k & (1LL << cur_pos)) {
                    ans[r--] = i;
                }
                else {
                    ans[l++] = i;
                }
            }
            cur_pos -= 1;
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";

    }
    
}