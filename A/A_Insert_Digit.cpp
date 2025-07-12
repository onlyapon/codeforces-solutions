#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        string s;
        cin >> s;
        
        if(x==0)
        {
            cout << s << x << "\n";
            continue;
        }
        bool flag = true;
        string ans = "";
       
        
        for (int i = 0; i < n; i++)
        {
            if((s[i]-'0')<x and flag==true)
            {
                flag = false;
                cout << x <<s[i];
            }
            else
                cout << s[i];
        }
        if(flag)
            cout << x;
        cout << "\n";
    }
}