#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;

        
        if(n==2){
            if(s[0]=='A')cout<<"Alice\n";
            else cout<<"Bob\n";
            continue;
        }
        vector<int> a,b;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A')a.push_back(i);
            else b.push_back(i);
        }
        

        if(a[0]==0 and a.back()==n-1)cout<<"Alice\n";
        else if(b[0]==0 and b.back()==n-1)cout<<"Bob\n";
        else if(a[0]==0 and b.size()>=2)cout<<"Bob\n";
        else if(a[0]==0 and b.size()<2)cout<<"Alice\n";
        else{
            if(a[a.size()-2]==n-2) cout << "Alice\n";
            else cout << "Bob\n";
        }

        
    }
    
}