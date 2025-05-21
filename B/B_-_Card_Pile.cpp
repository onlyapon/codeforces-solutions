#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;cin>>q;
    vector<int> v(100,0);
    for (int i = 0; i < q; i++)
    {
       int x;cin>>x;
       if(x==1){
        int y;cin>>y;
        v.push_back(y);
       }else{
        cout<<v.back()<<endl;
        v.pop_back();
       }
    }
    
}