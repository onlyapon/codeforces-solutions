#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,o_o=0,e_o=0,e_z=0,o_z=0;cin>>n;
        string a,b;
        cin>>a>>b;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='1' and i%2==0)o_o++;
            else if(a[i]=='1' and i%2==1) e_o++;
        }
        for (int i = 0; i < n; i++)
        {
            if(b[i]=='0' and i%2==0)o_z++;
            else if(b[i]=='0' and i%2==1) e_z++;
        }
        
        if(e_o<=o_z and o_o<=e_z)cout<<"YES\n";
        else cout<<"NO\n";


        
    }
    
}