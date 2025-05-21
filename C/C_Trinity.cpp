#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        int ii=0;
        int temp;
        for (auto i:s)
        {
            if (ii==s.size()/2)
            {
                temp=i;
            }
            ii++;

            
        }
        // cout<<temp;

        sort(v.begin(),v.end());

        int cnt=0;

        if (v[0]+v[1]>v[n-1])
        {
            cout<<0<<endl;
            continue;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (v[i]==temp)
            {
                continue;
            }
            
            if (v[i]+temp<=v[n-1])
            {
                cnt++;
            }
            
        }
        

        // for (int i = n/2 + 2; i <n; i++)
        // {
        //     if (v[i]+v[(n/2)+1]<=v[n-1])
        //     {
        //         cnt++;
        //         // cout<<v[i];
        //     }
            
        // }
        cout<<cnt<<endl;
        
    }
    
}