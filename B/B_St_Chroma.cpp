#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int x;cin>>x;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n==x){
            for (int i = 0; i < n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
            
        }
        if(x!=0 )
        {
            cout<<x-1<<" ";
            for (int i = 0; i < n; i++)
            {
                if(i==x or i==(x-1))continue;
                else cout<<i<<" ";
            }
            cout<<x<<endl;
        }else{
            cout<<1<<" ";
            for (int i = 0; i < n; i++)
            {
                if(i==x or i==1)continue;
                else cout<<i<<" ";
            }
            cout<<x<<endl;
        }
    }
    
}