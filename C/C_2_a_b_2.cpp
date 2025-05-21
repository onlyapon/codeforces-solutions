#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;cin>>n;
    int c=1;
    for (int i = 0; i < 64; i++)
    {
        if(n&(c<<i)){
            if (1LL*sqrt(n-(c<<i))*sqrt(n-(c<<i))==(n-(c<<i)))
            {
                cout<<"YEs";
            }
            
        }
    }
   
}