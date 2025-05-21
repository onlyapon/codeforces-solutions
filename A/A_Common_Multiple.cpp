#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while (t--)
   {
    int n;cin>>n;
    vector<int> v(n);
    set<int> s;
    for(auto &i:v){
        cin>>i;
        s.insert(i);
    }

    
    
    cout<<s.size()<<endl;
    


   }
   
    
}