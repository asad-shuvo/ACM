#include <bits/stdc++.h>
using namespace std;
#define mx 10005
vector<int>G[mx];
int vis [mx];
int N,E;
int bfs(int source){
        vis[source]=1;
        queue<int>Q;
        Q.push(source);
        while(!Q.empty()){
            int u=Q.front();
            for(int i=0;i<G[u].size();i++){
                int v=G[u][i];
                if(!vis[v]){
                    vis[v]=1;
                    Q.push(v);
                }
            }
            Q.pop();
        }

}
int main()
{
    int i,j,k,l,test;
    cin>>test;
    while(test--){
            memset(vis, 0 ,sizeof(vis));
    scanf("%d%d%d",&N,&E,&l);
    while(E--){
        int x,y;
        scanf("%d%d",&x,&y);
        G[x].push_back(y);
    }
    while(l--){
        scanf("%d",&k);
        bfs(k);
    }
    int cnt=0;
    for(i=1;i<=N;i++){
        if(vis[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
    for(i=0;i<=N;i++)
    {
        G[i].clear();
    }
    }
}
