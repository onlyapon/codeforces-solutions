#include <bits/stdc++.h>
using namespace std;

int digcheck(int x){
    int y=0;
    while (x)
    {
        y++;
        x/=10;
    }
    return y;
}

bool prime(long long x){
    if(x<2) return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if(x%i==0)return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,k;
        cin>>x>>k;
        
        if (k==1)
        {
            if (prime(x))
            {
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
            
        }else if(k==2){
            if (x==1)
            {
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
            
        }
        else{
            cout<<"NO\n";
        }
        
    }
    
}