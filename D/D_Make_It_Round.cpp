#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int n0 = n;
        int k = 1;
        int cnt2 = 0, cnt5 = 0;
        while (n > 0 and n % 2 == 0)
        {
            cnt2++;
            n /= 2;
        }
        while (n>0 and n%5==0)
        {
            n /= 5;
            cnt5++;
        }
        while (cnt5<cnt2 and k*5<=m)
        {
            k *= 5;
            cnt5++;
        }
        while (cnt2<cnt5 and k*2<=m)
        {
            cnt2++;
            k *= 2;
        }
        while(k*10<=m){
            k *= 10;
        }
        if (k==1)
        {
            
            cout << n0 * m << "\n";
        }else{
            k *= m / k;
            cout << n0 * k << "\n";
        }
    }
}
