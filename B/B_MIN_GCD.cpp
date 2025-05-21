#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        long long n,cnt=0;cin>>n;
        vector<long long> v(n);
        for(auto &i:v)cin>>i;
        sort(v.begin(),v.end());
        bool flag=true;
        long long g=0;
        for (int i = 1; i < n; i++)
        {
            if(v[i]%v[0]==0){g=__gcd(g,v[i]);}
        }
        if (g!=v[0])
        {
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
        
    }
    
}