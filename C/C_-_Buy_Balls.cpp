#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,m,ans=0;cin>>n>>m;
    vector<int> b(n),w(m);
    for(auto &i:b)cin>>i;
    for(auto &i:w)cin>>i;
    sort(b.begin(),b.end());
    sort(w.begin(),w.end());
    bool flag=false;
    while (!b.empty() || !w.empty())
    {
        if(b.back()>0 and w.back() >0){
            ans+=(b.back()+ w.back());
            b.pop_back();
            w.pop_back();
        }else if(b.back()>0 and w.back() <0){
            ans+=b.back();
            b.pop_back();
        }else if(b.back()<0 and w.back() >0 ){
            if(b.back()+w.back() >=0 )
            {
                ans+=(b.back()+ w.back());
                b.pop_back();
                w.pop_back();
            }else{
                break;
            }
        }
        else{
            break;
        }
    }
    cout<<ans;
    
}