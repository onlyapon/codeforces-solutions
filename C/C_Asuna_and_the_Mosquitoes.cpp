#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,cnt=0,ans=0;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
            if (x % 2 == 1)
                cnt++;
            ans+=x;
        }

        if (!cnt or cnt==n)
        {
            cout<<*max_element(a.begin(), a.end())<<endl;
        }else{
            cout << ans - cnt + 1 << '\n';
        }
        
    }
}