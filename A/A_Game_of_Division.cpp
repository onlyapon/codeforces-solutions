#include <bits/stdc++.h>
using namespace std;

void s(){
     int n,k;cin>>n>>k;
        vector<int> v(n);
        vector<int> no;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(abs(v[i]-v[j])%k==0){
                    no.push_back(v[i]);
                    no.push_back(v[j]);
                }
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            if(find(no.begin(),no.end(),v[i])==no.end()){
                cout<<"YES\n";
                cout<<i+1<<endl;
                return;
            }
        }
        cout<<"NO\n";
        
        
}
int main(){
    int t;cin>>t;
    while (t--)
    {
       s();
        
    }
    
}