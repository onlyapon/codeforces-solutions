#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(k,0);
    int sum=0;
    for (int i = 0; i < k; i++)
    {
        int a,b;cin>>a>>b;
        v[a-1]+=b;

    }
    
    sort(v.rbegin(),v.rend());
    for (int i = 0; i < min(n,k); i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
       solve();

    }
    
}