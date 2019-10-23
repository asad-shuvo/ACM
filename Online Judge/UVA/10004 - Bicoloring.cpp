#include <bits/stdc++.h>
using namespace std;
#define mx 205
vector<int>G[mx];
int color[mx];
int vis[mx];
int t;
void dfs(int u){
        vis[u]=1;
        for(int i=0;i<G[u].size();i++){
            int k=G[u][i];
            if(vis[k]==0){
            if(color[u]==1)
                color[k]=2;
            else if(color[u]==2)
                color[k]=1;
            dfs(k);
            }

            if((color[k]==color[u]))
            {
                t=0;
                return;
            }
        }
 //       Q.pop();
}

int main()
{
    int i,j,k,l,node,e;
    //clearr();
    t=1;
    memset(vis,0,sizeof(vis));
    scanf("%d%d",&e,&node);
    while(node--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    for(i=1;i<=node;i++){
        if(vis[i]==0){
                color[i]=1;
            dfs(i);
        }
    }
    if(t==0){
        printf("NOT BICOLORABLE.\n");
    }
    else
        printf("BICOLORABLE.\n");
        for(i=0;i<=node;i++)
            G[i].clear();
}
