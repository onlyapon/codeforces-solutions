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
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(min(zero,one)&1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
}