#include <bits/stdc++.h>
using namespace std;
vector<int> v;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        s+=s;
        int last = -1;
        for (int i = 0;i<n;i++) {
          if (s[i] == 'g') {last = i;break;}
        }
        last+=n;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
          if (s[i] == 'g') last = i;
          if (s[i] == c) ans = max(ans, last - i);
        }
        cout << ans << '\n';
      
    }
    
}