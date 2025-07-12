#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
   
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;
        int mx = 1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==s[i+1]){
                ans++;
                mx = max(mx, ans);
            }else{
                ans = 1;
            }
        }
        cout << mx + 1 << endl;
    }
}