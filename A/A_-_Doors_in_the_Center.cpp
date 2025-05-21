#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if(n%2==0 and (n-1)/2==i)i++,cout<<"==";
        else if(n%2==1 and i==n/2) cout<<'=';
        else cout<<'-';
    }
    
}