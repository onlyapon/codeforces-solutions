#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = b;
        int bb = b;
        for (int i = 0; i < n; i++)
        {
            ans = ans + min(a - 1, arr[i]);
        }
            cout << ans << endl;
    }
}