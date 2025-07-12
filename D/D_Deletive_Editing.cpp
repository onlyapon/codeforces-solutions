#include <bits/stdc++.h>
using namespace std;

void s(){
    string s, x;
    cin >> s >> x;
    unordered_map<char, int> mpx;
    unordered_map<char, int> mps;
    for (int i = 0; i < x.length(); i++)
    {
        mpx[x[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        mps[s[i]]++;
    }

    for(auto [x,y]:mpx){
        if(mps[x]-y<0)
        {
            cout << "NO\n";
            return;
        }
       
    }
    unordered_map<char, int> mp;
    for (auto [x, y] : mpx)
    {
        mp[x] = mps[x] - y;
    }

    // for(auto [a,b]:mp){
    //     cout << a << " " << b<<" ";
    // }

    string ans="";
    for (int i = 0; i < s.length(); i++)
    {
        if(mp.count(s[i]) and mp[s[i]]>0){
            mp[s[i]]--;
            continue;
        }
        else if(mp.count(s[i]) and mp[s[i]]==0)
            ans+=s[i];
    }
    if(ans==x)
        cout << "YES\n";
    else
        cout << "NO\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        s();
    }
}