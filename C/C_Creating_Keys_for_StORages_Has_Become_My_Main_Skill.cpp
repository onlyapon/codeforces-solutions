#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int y = 0;
    for (int i = 0; i < n; i++) {
      int num = x;
      if ((x & i) == i) num = i;
      y |= num;
      if (y != x && i == n-1) num=x; cout<<num<<endl;
    }
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}