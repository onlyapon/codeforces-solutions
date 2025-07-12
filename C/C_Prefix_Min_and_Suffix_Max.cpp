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
        int n;
        cin >> n;
        int arr[n];
        int p[n];
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        p[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            p[i] = min(arr[i], p[i - 1]);
        }
        s[n - 1] = arr[n - 1];
        for (int i = n-2; i >= 0; i--)
        {
            s[i] = max(s[i + 1], arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==s[i] or arr[i]==p[i])
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}