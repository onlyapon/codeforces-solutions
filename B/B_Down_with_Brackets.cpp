#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   string s;cin>>s;
   int cnt1=0,cnt2=0;
   int ans=0;
   bool flag=false;
   for (int i = 0; i < s.length(); i++)
   {
        
        if (s[i]=='(')
        {
            if (cnt1==0 and flag==true)
            {
                cout<<"YES\n";
                return;
            }
           cnt1++;
           
           
        }else{
            cnt1--;
            flag=true;
        }
   }
   cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}