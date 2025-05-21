#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int instance=a[0],cnt=1;
    for (int i = 1; i < n; i++)
    {
        if(instance==a[i])cnt++;
        else{
            instance=a[i],cnt=1;
        }
        if(cnt>=3){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}