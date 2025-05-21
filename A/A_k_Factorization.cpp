#include <bits/stdc++.h>
using namespace std;
#define int long long
int spf[1000100];
void spf_fun(){
    for (int i = 0; i < 1000100; i++)
    {
        spf[i]=i;
    }
    for (int i = 2; i < 1000100; i++)
    {
        if (spf[i]==i)
        {
            
            for (int j = i*2; j < 1000100; j+=i)
            {
                if (spf[j]==j)
                {
                    spf[j]=i;
                }
                
            }
        }   
    }
}
signed main(){
    spf_fun();
    int n,k;
    cin>>n>>k;
    int x=n;
    vector<int> v;
    int mul=1;
    while (x!=1)
    {
        v.push_back(spf[x]);
        mul*=spf[x];
        x/=spf[x];
    }
    if (v.size()<k)
    {
        cout<<-1;
    }else{
        int cnt=k;
        int last=1;
        for (int i = 0; i < k-1; i++)
        {
            cout<<v[i]<<" ";
            mul/=v[i];
        }
        cout<<mul;
    }
    
}