#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n;cin>>n;
   vector<int> d(n);
   for (int i = 0; i < n; i++)
   {
    cin>>d[i];
   }
   vector<pair<int,int> > vp;
   for (int i = 0; i < n; i++)
   {
    int x,y;cin>>x>>y;
    vp.push_back({x,y});
   }


   
   int dis=0;
   for (int i = 0; i < n; i++)
   {
    
    if (d[i]!=-1)
    {
        dis+=d[i];
        if(vp[i].first<=dis and dis<=vp[i].second){
            
        }else{
            cout<<-1<<endl;
            return;
        }
    }else{

        if(vp[i].first<=dis+1 and dis+1<=vp[i].second){
            d[i]=1;
            dis+=1;
        }else if(vp[i].first<=dis and dis<=vp[i].second){
            d[i]=0;
        
        }else{
            cout<<-1<<endl;
            return;
        }

    }
   }
   for(auto i:d)cout<<i<<" ";
    cout<<"\n";
   
   
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}