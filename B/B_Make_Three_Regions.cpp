#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int cnt=0;
    string s1,s2;cin>>s1>>s2;
    for (int i = 0; i <n-2; i++)
    {
        
        if (s1[i]=='.' and s1[i+1]=='.' and s1[i+2]=='.' and s2[i]=='x' and s2[i+2]=='x' and s2[i+1]=='.')
        {
            cnt++;
        }
        if (s2[i]=='.' and s2[i+1]=='.' and s2[i+2]=='.' and s1[i]=='x' and s1[i+2]=='x' and s1[i+1]=='.')
        {
            cnt++;
        }
        
    }
    cout<<cnt<<endl;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
       solve();
        
    }
    
}