#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1;; i++)
        {
            if (n%i!=0)
            {
                cout<<i-1<<endl;
                break;
            }
            
        }
        
    }
}