#include <bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    int n,ans=0;cin>>n;
    vector<int> v(n);
    vector<int> instance(n+1,0);
    vector<int> dis(n);
    vector<int> dis2(n);
    
    for(auto &i:v)cin>>i;
    for (int i = 0; i < n; i++)
    {
        if(instance[v[i]]==0)ans++,instance[v[i]]=1,dis[i]=ans;
        else{
            dis[i]=ans;
        }
    }
    ans=0;
    fill(instance.begin(),instance.end(),0);

    for (int i = n-1; i >=0; i--)
    {
        if(instance[v[i]]==0)ans++,instance[v[i]]=1,dis2[i]=ans;
        else{
            dis2[i]=ans;
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        ans=max(ans,dis[i]+dis2[i+1]);
    }
    cout<<ans;
    
}