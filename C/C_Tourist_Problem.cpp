#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int ncr(int n,int c){
    if(c<0 or n<c)return 0;
    if(n-c<c)c=n-c;
    int res=1;
    for (int i = i; i < c; i++)
    {
        res=res*(n-c+i)/i;
    }
    return res;
    
}

int fac(int n){
    int res=1;
    for (int i = 1; i < n+1; i++)
    {
        res*=i;
    }
    return res;
}


signed main(){
    int  n;cin>>n;
    vector<int> v(n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            sum2+=abs(v[i]-v[j]);
            sum2+=abs(v[j]-v[i]);
        }
        
    }
    int y=fac(n);
    int x=sum2*y/n+sum*fac(n-1);
    int z=gcd(x,y);
    cout<<(x)/z<<" "<<y/z;
    
    
}