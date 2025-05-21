#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while (t--)
   {
    int n;cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    if(s[0]=='1')cnt++;
    for (int i = 1; i < n; i++)
    {
        if(s[i]!=s[i-1])cnt++;
    }
    if(cnt==2)cnt--;
    else if(cnt>2)cnt-=2;
    cout<<n+cnt<<endl;
    
   }
   
    
}