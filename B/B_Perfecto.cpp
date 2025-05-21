#include <bits/stdc++.h>
using namespace std;

bool checker(int x){
    long long sx=sqrt(x);

    if(sx*sx==x) return 1;
    else return 0;
}
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll N;cin>>N;
        ll sum=N*(N+1)/2;
        ll M=roundl(sqrtl(sum));
        if(M*M==sum) cout<<-1<<"\n";
        else{
            vector<ll> ans(N);iota(ans.begin(),ans.end(),1);
            sum=0;
            for(int i=0;i<N;i++){
                sum+=ans[i];
                M=roundl(sqrtl(sum));
                if(M*M==sum){
                    swap(ans[i],ans[i+1]);
                    sum++;
                }
            }
            for(ll a:ans) cout<<a<<" ";
            cout<<"\n";
        }
    }
}