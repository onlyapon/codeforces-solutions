#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, x, y, x1, y1;
    cin >> n >> x >> y >> x1 >> y1;
    cout <<abs( min(min(x, y), min(abs(n - x + 1), abs(n - y + 1)))-min(min(x1,y1),min(abs(n-y1+1),abs(n-x1+1))));
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}