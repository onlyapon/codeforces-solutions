#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        int mo=0,o=0;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if (v[i]==-1)
            {
                mo++;
            }else o++;
            
        }
        int cnt=0;
        while (mo%2==1 or mo>o)
        {
            mo--;
            o++;
            cnt++;
        }
        
        cout<<cnt<<endl;
        
        

        
    }
    
}