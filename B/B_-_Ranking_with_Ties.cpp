#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    vector<int> vv;
    unordered_map<int,int> um;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        v.push_back(x);
        vv.push_back(x);

    }
    sort(v.begin(),v.end());
    for (int i = n-1; i >-1; i--)
    {
        if(um[v[i]]==0)
            um[v[i]]=n-i;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<um[vv[i]]<<endl;
    }
    cout<<endl;

    
}