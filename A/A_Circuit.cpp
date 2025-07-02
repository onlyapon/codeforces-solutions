#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n*2);
        int one=0,zero=0;
        for (int i = 0; i < n*2; i++)
        {
            cin>>v[i];
            if(v[i])one++;
            else zero++;
        }
       cout<<n-(one/2)-(zero/2)<<" "<<min(zero,one)<<endl;
        
    }
}