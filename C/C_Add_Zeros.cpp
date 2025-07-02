#include <bits/stdc++.h>
using namespace std;
#define ll long long
void dfs (ll pos, map<ll, vector<ll>> &nxt, set<ll> &vis) {
  if (vis.count(pos))
    return;
  vis.insert(pos);
 
  for (auto u : nxt[pos]) {
    dfs(u, nxt, vis);
  }
}
 
void solve () {
  int n;
  cin >> n;
 
  map<ll, vector<ll>> nxt;
  vector<ll> arr (n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    nxt[arr[i] + i].push_back(arr[i] + 2 * i);
  }
 
  set<ll> vis;
  dfs(n, nxt, vis);
 
  cout << *vis.rbegin() << '\n';
}
 
int main () {
  ios::sync_with_stdio(false);
  cin.tie(0);
 
  int testc;
  cin >> testc;
 
  for (int i = 0; i < testc; i++) {
    solve();
  }
}
 