#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int dif=1e9;
        if (!is_sorted(a,a+n))
        {
            cout<<0<<endl;
            continue;
        }
        
        for (int  i = 0; i < n-1; i++)
        {
            dif=min(dif,abs(a[i]-a[i+1]));
        }
        cout<<(dif/2)+1<<endl;
        
    }
    
}