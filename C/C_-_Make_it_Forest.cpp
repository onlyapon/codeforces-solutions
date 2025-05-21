#include <bits/stdc++.h>
using namespace std;
int ans=0;
int v,e;
vector<vector<int>> g;
vector<bool> m;
int bfs(int x){
    queue<int> q;
    q.push(x);
    m[x]=1;
    int p=0,edge=0;
    while (!q.empty())
    {
        int top=q.front();
        q.pop();
        p++;
        for(auto c:g[top]){
            edge++;
            if(m[c])continue;
            m[c]=1;
            q.push(c);


        }


    }
    return ans+=(edge/2)-(p-1);
}

int main(){
  cin>>v>>e;
  g.assign(v+1, vector<int>());
  m.assign(v+1,0);
    for (int i = 0; i < e; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i < v+1; i++)
    {
        if (!m[i])
        {
            bfs(i);
        }
        
    }
    cout<<ans<<endl;
}