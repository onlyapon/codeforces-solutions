#include<bits/stdc++.h>
using namespace std;
int main(){
    int dp[999999];
    for (int i = 0; i <= 9; i++)
    {
        dp[i]=i;
    }
    for (int i = 10; i < 999999+1; i++)
    {
        int n=i,cnt=0;
       while(n!=0){
            if(n%10!=0)cnt++;
            n/=10;
            if(cnt>2)break;
        }
        if (cnt==1)
        {
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=dp[i-1];
        }
        
    }
    
    
    int t;cin>>t;
    while(t--){
        int nn;
        cin>>nn;
        cout<<dp[nn]<<endl;
    }
}