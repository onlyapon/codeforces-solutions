#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while (n--)
    {
        int t;cin>>t;
        if (t%2==0)
        {
            cout<<-1<<endl;
        }else{
            for (int i = t; i>0; i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
         
    }
    
}