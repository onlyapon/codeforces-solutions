#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v(11);

void fib(){
    int ii=1,j=2;
    v[1]=1,v[2]=2;
    for (int i = 3; i < 11; i++)
    {

        v[i]=ii+j;
        ii=j;
        j=v[i];
    }
    
}
 
void solve () {
    int n,m;cin>>n>>m;
    vector<vector<int>> box(m,vector<int> ());
    for (int i = 0; i < m; i++)
    {
        int x,y,z;cin>>x>>y>>z;
        box[i].push_back(x);
        box[i].push_back(y);
        box[i].push_back(z);
        box[i].push_back(x*y*z);
    }
    for (int i = 0; i < m; i++)
    {
        if(box[i].back()>=(v[n]*v[n]+v[n-1]*v[n-1]) and box[i][0]>=v[n] and box[i][1]>=v[n] and box[i][2]>=(v[n]+v[n-1])){
            cout<<1;
            continue;
        }
        if(box[i].back()>=(v[n]*v[n]+v[n-1]*v[n-1]) and box[i][0]>=(v[n]+v[n-1]) and box[i][1]>=v[n] and box[i][2]>=v[n]){
            cout<<1;
            continue;
        }
        if(box[i].back()>=(v[n]*v[n]+v[n-1]*v[n-1]) and box[i][0]>=v[n] and box[i][1]>=(v[n]+v[n-1]) and box[i][2]>=(v[n])){
            cout<<1;
            continue;
        }
        cout<<0;
    }
    
    cout<<endl;
    
}
 
int main () {
  ios::sync_with_stdio(false);
  cin.tie(0);
 
   fib();
  int testc;
  cin >> testc;
 
  for (int i = 0; i < testc; i++) {
    solve();
  }
}
 