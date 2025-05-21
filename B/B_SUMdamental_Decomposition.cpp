#ifdef __cplusplus
#define _Alignof(x) alignof(x)
#endif
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int x;cin>>x;
        if(n==1 and x==0){
            cout<<-1<<"\n";
            continue;
        }
        if(x==0){
            if(n&1)cout<<n+3<<endl;
            else cout<<n<<endl;
            continue;
        }
        if(__builtin_popcount(x)>=n){
            cout<<x<<"\n";
        }else{
            if((n-__builtin_popcount(x))&1){
                if (x==1)
                {
                    cout<<n+3<<"\n";
                }else{
                    cout<<x+(n-__builtin_popcount(x))+1<<"\n";
                }
                
            }else{
                cout<<x+n-__builtin_popcount(x)<<endl;
            }
        }
    }
    
}