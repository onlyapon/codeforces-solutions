#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        bool flag=0;
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            if (flag==0)
            {
                mp[i+1]=v[i];
                flag=1;
                continue;
            }

            if (mp[i+1]==0 and mp[i-1]==0)
            {
                   
            }
            
            
            
        }
        
        
    }
    
}