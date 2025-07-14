#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> first(n + 1, -1);
        for (int k = 0; k < m; k++)
        {
            int i, j;
            cin >> i >> j;
            if(i>j)
                swap(i, j);
            first[j] = max(i, first[j]);
        }
        
        int ans = 0;
        int last = 1;

        for (int i = 1; i <= n; i++)
        {
            last = max(last, first[i] + 1LL);
            ans += (i-last+1);
        }
        cout << ans << "\n";
    }
}