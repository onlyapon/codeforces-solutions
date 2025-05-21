#include <bits/stdc++.h>
using namespace std;

long long n,m,k;

int can(int x){
    long long temp=((1LL*m/(x+1))*x + m%(x+1))*n;
    // cout<<temp<<" "<<x<<endl;
    if(temp>=k) return 1;
    else return 0;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        cin>>n>>m>>k;
        
        long long l=0,hi=m;
        while (hi-l>1)
        {
            int mid=(l+hi)/2;
            if(can(mid))hi=mid;
            else l=mid+1;
        }
        cout<<hi<<endl;
    }

}