#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> um;
    for (int i = 0; i < 7; i++)
    {
        int x;cin>>x;
        um[x]++;
    }

    int x=0;
    bool y=0;
    for (auto &pair:um)
    {
        if (pair.second>=3)
        {
           x++;
        }
        if(pair.second==2)y=1;
        
    }
    if((x>=2) or (y==1 and x==1)) cout<<"Yes";
    else cout<<"No";
    
    
    
}