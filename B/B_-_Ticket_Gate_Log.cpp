#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        int t=ans+i;
        if(t%2==0 and s[i]!='i')ans++;
        else if(t%2!=0 and s[i]!='o')ans++;

    }
    (s.length()+ans)%2==0?ans:ans++;
    cout<<ans;
}