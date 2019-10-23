#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
#define mx 205
vector<int>G[mx];
int colors[mx];
int taken[mx];
bool BFS(int source,int node)
{
    queue<int>q;
        q.push(source);

    colors[source]=1;
    taken[source]=1;
    while(!q.empty()){
    int u=q.front();
        q.pop();

    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
                    if(colors[v]==colors[u]){
                return 0;
            }
        if(taken[v]==0){
           taken[v]=1;
           if(colors[u]==2)
            colors[v]=1;
           else
            colors[v]=2;
            q.push(v);
        }
    }
    }
    return 1;
}
int main()
{
    int node,edge;
    while(scanf("%d",&node)!=EOF && node>0){
    scanf("%d",&edge);
    for(int i=0;i<=node;i++){
    G[i].clear();
    colors[i]=0;
    taken[i]=0;
}
    while(edge--){
        int x,y;
        scanf("%d%d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
      int  t=BFS(1,node);
if(t==0) cout<<"NOT BICOLORABLE."<<endl;
else
    cout<<"BICOLORABLE."<<endl;

}
}

