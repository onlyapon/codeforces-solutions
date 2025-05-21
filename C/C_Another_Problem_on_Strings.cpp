#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int cnt=0;
  string s,t;cin>>s>>t;
  for(int i=0;i<n;i++){
    if(s[i]!=t[i])cnt++;
  }
  cout<<cnt;
}