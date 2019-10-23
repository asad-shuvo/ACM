#include <bits/stdc++.h>
using namespace std;
vector <int>G[10000];
vector<int>v1,v2;
int vis[10000];
int bfs(int N,int source,int k){
    v1.push_back(source);
    for(int loop=0;loop<=N;loop++){
    for(int i=0;i<v1.size();i++){
        int u=v1[i];
        for(int j=0;j<G[u].size();j++){
            int v=G[u][j];
            if(vis[v]==0){
            printf("%d\n",v);
            vis[v]=1;
            }
            for(int l=0;l<G[v].size();){
                int v3=G[v][l];
                if(vis[v3]==0){
                vis[v3]=1;
                printf("%d\n",v3);
                }
            }
        }
    }
}
}
int main()
{
    int n,i,j,k,l,m;
    cin>>n;
    while(n--){
        int x,y;
        scanf("%d%d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cin>>m>>k;
    bfs(n,m,k);
}
