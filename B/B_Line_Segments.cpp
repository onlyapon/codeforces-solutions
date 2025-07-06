#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long double arr[n];
        long double x = a - c;
        long double y = b - d;
        long double dist = sqrt(x * x + y * y);
        long double ans = 0;
        long double mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += arr[i];
            mx = max(mx, arr[i]);
        }
        ans += dist;
        mx = max(mx, dist);
        // cout << mx;
        ans -= mx;
        if (mx <= ans)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}