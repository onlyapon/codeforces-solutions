#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        long long n,x,k;cin>>n>>x>>k;
        string s;cin>>s;
        long long cnt=0;
        bool flag=0;
        for (int i = 0; i < n; i++)
        {
            cnt++;
            if(s[i]=='R')x++;
            else x--;
            if(x==0){
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            cout<<0<<endl;
            continue;
        }
        
        k-=cnt;
        x=0;
        cnt=0;
        bool flag2=0;
        for (int i = 0; i < n; i++)
        {
            cnt++;
            if(s[i]=='R')x++;
            else x--;
            if(x==0){
                flag2=1;
                break;
            }
        }
        if(flag2)
            cout<<(k/cnt)+1<<endl;
        else 
            cout<<1<<endl;
        
    }
    
}