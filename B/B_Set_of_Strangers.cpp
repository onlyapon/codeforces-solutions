#include <bits/stdc++.h>
using namespace std;
signed main(){
    int t;cin>>t;
    while (t--)
    {
        int n,m;cin>>n>>m;
        int a[n][m];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
                s.insert(a[i][j]);
            }
            
        }
        if (s.size()==1)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=s.size();
        s.clear();
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(s.find(a[i][j])==s.end()){
                    if(i<n-1 and j<m-1){
                        if(a[i][j]==a[i+1][j] or a[i][j]==a[i][j+1])ans++,s.insert(a[i][j]),flag=true;
                    }
                    else if (i < n-1 && j == m-1)
                    {
                        if(a[i][j]==a[i+1][j]){
                            ans+=1;
                            s.insert(a[i][j]);
                            flag=true;
                        }
                    }
                    else if (i == n-1 && j < m-1)
                    {
                        if(a[i][j]==a[i][j+1])ans++,s.insert(a[i][j]),flag=true;
                    }
                    
                    // if(a[i][j]==a[i+1][j] or a[i][j]==a[i][j+1])cout<<a[i][j];
                }
                
            }
            
        }
        if (flag)
        {
            ans-=2;
        }else{
            ans-=1;
        }
        

        cout<<ans<<endl;
    }
    
}