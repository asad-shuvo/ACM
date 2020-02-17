#include <bits/stdc++.h>
using namespace std;
#define mx 20005
vector<int>G[mx];
int vis[mx];
int dis[mx];
void bfs(int start,int n){
    for(int i=0;i<=mx+5;i++){
          vis[i]=0;
            dis[i]=0;
    }
    queue<int>q;
    q.push(start);
    vis[start]=1;
    dis[start]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(vis[v]==0){
                vis[v]=1;
                dis[v]=dis[u]+6;
                q.push(v);
            }
        }
    }
for(int i=1;i<=n;i++){
    if(start==i)continue;
    else if(dis[i]==0)cout<<-1<<" ";
    else cout<<dis[i]<<" ";
   
}
 cout<<endl;
}
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<=20005;i++){
            G[i].clear();
          
        }
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        int s;
        cin>>s;
        bfs(s,n);
    }
}

