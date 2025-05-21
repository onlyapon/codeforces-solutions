#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int cnt=0;
        string s;cin>>s;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')cnt+=(n-1);
            else cnt++;
            
        }
        cout<<cnt<<endl;
    }
    
}