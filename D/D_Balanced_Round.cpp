#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout << 0 << "\n";
            continue;
        }
        int ans = 1;
        int mx = 1;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i+1]-arr[i]<=k){
                ans++;
            }else{
                ans = 1;
            }
            mx = max(ans, mx);
        }
        cout << n - mx << endl;
    }
}