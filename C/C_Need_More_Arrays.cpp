#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int cnt=1;
        for (int i = 1; i < n; i++)
        {
            if(v[i]-v[i-1]>1)cnt++;
            else if(i<n-2 and v[i+1]-v[i-1]>1)cnt++,i++;
        }
        
        cout<<cnt<<endl;
    }
    
}
