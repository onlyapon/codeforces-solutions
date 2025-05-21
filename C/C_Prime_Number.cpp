#include <bits/stdc++.h>
using namespace std;


long long pow(long long x,long long a){
    if(a==0) return 1;
    if(a%2==0){
        long long y=pow(x,a/2);
        return y*y;
    }else{
        long long y=pow(x,(a-1)/2);
        return y*y*x;
    }
}
int main(){
    int n,x;cin>>n>>x;
    vector<int> v(n);
    long long t=0,mx=0;
    for(int &i:v){
        cin>>i;
        long long z=pow(x,i);
        t+=z;
        mx=max(mx,z);
    }
    t%=1000000007;
    mx%=1000000007;
    cout<<__gcd(mx,t)%1000000007;
}