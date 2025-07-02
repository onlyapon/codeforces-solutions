#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    int mn=1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mn=min(mn,abs(v[i]));

    }
    cout<<mn;
    
}