#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<int> dp(m+1,0);

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

signed main(){
    cin>>n>>m;
    int sum=0;
    for (int i = 0; i < m+1; i++)
    {
        sum+=binpow(n,i);
        if (sum>1e9)
        {
            cout<<"inf";
            break;
        }
    }
    if(sum<=1e9)
        cout<<sum;
    
    

}