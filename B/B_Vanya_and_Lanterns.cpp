#include <bits/stdc++.h>
using namespace std;
#define int double
vector<int> v;
int n,k;
// int check(int mid){

//     if(mid<v[0] or k-v[n-1]>mid) return 0;

    
//     return 1;
// }

signed main(){
    cin>>n>>k;
    
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int mx=max(v[0],k-v[n-1]);
    for(int i=0;i<n-1;i++)
    {
        mx=max(mx,(v[i+1]-v[i])/2.0);
        
    }
   
    printf("%0.10lf", mx);
    
}