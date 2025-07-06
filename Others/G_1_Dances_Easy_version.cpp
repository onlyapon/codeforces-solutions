#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            if (i==0)
            {
                a[i] = 1;
                continue;
            }
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int i = 0, j = 0;
        int ans = 0;
        while(i<n and j<n)
        {
            if (a[i]<b[j])
            {
                i++;
                j++;
            }
            else
            {
                while (a[i]>=b[j] and j<n)
                {
                    j++;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}