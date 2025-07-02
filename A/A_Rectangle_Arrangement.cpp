#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int mx=-1,my=-1;
        for (int i = 0; i < n; i++)
        {
            int x,y;cin>>x>>y;
            mx=max(mx,x);
            my=max(my,y);
        }
        cout<<2*(mx+my)<<endl;
        
    }
    
}