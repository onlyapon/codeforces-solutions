#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1,0));
    for (int i = 1; i <= n; i++)
    {
        dp[i][1] = 1;
    }
    
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int kk = j; kk < n+1; kk+=j)
            {
                dp[kk][i+1] = (dp[kk][i+1] + dp[j][i]) % 1000000007;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i < n+1; i++)
    {
        ans += dp[i][k] % 1000000007;
    }

    cout <<ans % 1000000007;
}