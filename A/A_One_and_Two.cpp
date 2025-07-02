#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    
    int t;cin>>t;
    while(t--){
        int nn,cnt=0;
        map<int,int> mp;
        cin>>nn;
        vector<int> m(nn,1);
        vector<int> v(nn);
        
        for (int i = 0; i < nn; i++)
        {
            cin>>v[i];
            if(v[i]==2)
               { cnt++;mp[cnt]=i;}
            
        }
        if(cnt&1)cout<<-1<<endl;
        else
        cout<<mp[cnt/2]+1<<endl;

    }
}