#ifdef __cplusplus
#define _Alignof(x) alignof(x)
#endif
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        set<int> s;
        for(int i=0;i<n;i++){
            int x;

            cin>>x,s.insert(i);
            if(v.back()!=x)v.push_back(x);
        }
        int cnt=0;
        if(s.size()==1){
            cout<<1<<"\n";
            continue;
        }
        n=(int)v.size();
        for(int i=0;i < n;i++){
            if(!i and v[i]>v[i+1])cnt++;
            else if(v[i]>v[i-1] and i==n-1)cnt++;
            else if(v[i]>v[i-1] and v[i]>v[i+1])cnt++;
        }
        cout<<cnt<<endl;
    }
}