#include <bits/stdc++.h>
using namespace std;

vector<long long> seieve(){
    vector<long long> v(1e6,1);
    v[0]=v[1]=0;
    for (int i = 2; i*i < 1e6; i++)
    {
        if(v[i]==1){
            for(int j = 2*i; j < 1e6; j+=i)
            {
                v[j]=0;
            }
            
        }
    }
    return v;
}


int main(){
    int t;cin>>t;
    vector<long long> v=seieve();
    while (t--)
    {
        long long a;cin>>a;
        long long s=sqrt(a);
        if(s*s==a and v[s])cout<<"YES\n";
        else cout<<"NO\n";
    } 
    
}