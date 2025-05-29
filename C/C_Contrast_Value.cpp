#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        int dis=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(!i)
            dis+=abs(v[i]-v[i-1]);
        }
        if (dis==0)
        {
            cout<<1<<endl;
            continue;
        }
        
        

    }
    
}