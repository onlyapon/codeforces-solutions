#include <bits/stdc++.h>
using namespace std;
int main(){
    int  t;cin>>t;
    while (t--)
    {
        int a,b;cin>>a>>b;
        int x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
        set<pair<int,int>> king,queen;
        king.insert({x1+a,y1+b});
        king.insert({x1-a,y1+b});
        king.insert({x1+a,y1-b});
        king.insert({x1-a,y1-b});
        king.insert({x1+b,y1+a});
        king.insert({x1-b,y1+a});
        king.insert({x1+b,y1-a});
        king.insert({x1-b,y1-a});
        queen.insert({x2+a,y2+b});
        queen.insert({x2-a,y2+b});
        queen.insert({x2+a,y2-b});
        queen.insert({x2-a,y2-b});
        queen.insert({x2+b,y2+a});
        queen.insert({x2-b,y2+a});
        queen.insert({x2+b,y2-a});
        queen.insert({x2-b,y2-a});
        int cnt=0;
        for(auto i :king){
            if (queen.find(i)!=queen.end())
            {
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }
    
}