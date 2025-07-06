#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a==b)
        {
            cout << 0 << endl;
            continue;
        }else if((b-a)<-1 and a%2==0){
            cout << -1 << endl;
            continue;
        }
        if ((b-a)==-1)
        {
            cout << d << endl;
            continue;
        }

        int ans = 0;
        while (true)
        {
            if(a==b)break;
            if(a%2==0 and c>d){
                ans += d;
                a++;
                continue;
            }
            ans += c;
            a++;
        }
       cout << ans << endl;
    }
}