#include <bits/stdc++.h>
using namespace std;
vector<int>G[100];
int taken[100];
int bfs(int n,int src)
{
    queue<int>Q;
    int distance[100];
    taken[src]=1;
    distance[src]=0;
    Q.push(src);
    while(!Q.empty()){
        int u=Q.front();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(!taken[v]){
                distance[v]=distance[u]+1;
                taken[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    for(int i=1;i<=n;i++){
        printf("%d to %d distance %d\n",src,i,distance[i]);
    }
}
int main()
{
    int i,j,x,y,N,E;
    cin>>N>>E;
    for(i=1;i<=E;i++){
        cin>>x>>y;
        G[x].push_back(y);
    }
    bfs(N,0);
}
