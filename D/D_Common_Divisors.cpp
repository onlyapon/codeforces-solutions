#include <bits/stdc++.h>
using namespace std;

bool is_divisor(string s1,string s2){
    if (s1.size()%s2.size()!=0)
    {
        return false;
    }
    for (int i = 0; i < (int)s1.length(); i+=s2.size())
    {
        if(s1.substr(i,s2.size())!=s2)return false;
    }
    return true;
    
}


int main(){
    string s1,s2;cin>>s1>>s2;
    int n;
    n=s1.size();
    vector<string> vs;
    for (int i = 1; i <= n ; i++)
    {
        if(n%i!=0){
            continue;
        }
        if(is_divisor(s1,s1.substr(0,i)))vs.push_back(s1.substr(0,i));
    }
    int ans=0;
    for(auto i:vs){
        if (is_divisor(s2,i))
        {
            ans++;
        }
        
    }
    cout<<ans<<endl;

}