#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        bool flag=false;
        int n,cnt=0;
        n=s.length();

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='0'){
                flag=true;
            }else if(flag){
                cnt++;
            }
        }
        cout<<n-cnt-1<<endl;
    }

}