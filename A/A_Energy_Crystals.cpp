#include <bits/stdc++.h>
using namespace std;
#define ll long long

 
void solve () {
    int n;cin>>n;
    int t=0;
    int i=1;

    
    while(true){
       
        
        if(i<=n){

        }
        else break;
        t++;
        i=i<<1;
    }
        cout<<t*2+1<<endl;
}
 
int main () {
  ios::sync_with_stdio(false);
  cin.tie(0);
 
  int testc;
  cin >> testc;
 
  for (int i = 0; i < testc; i++) {
    solve();
  }
}
 