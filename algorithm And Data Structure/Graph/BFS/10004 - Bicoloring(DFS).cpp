#include <bits/stdc++.h>
using namespace std;
#define mx 200
vector<int>G[mx];
int vis[mx],colour[mx],flag;
void dfs(int u)
{
    vis[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis[v]==0){
            if(colour[u]==1){
                colour[v]=2;
            }
            else if(colour[u]==2)
            {
                colour[v]=1;
            }
            dfs(v);
        }
        if(colour[u]==colour[v]){
            flag=0;
            return;
        }
    }
}
int main()
{
    int N,E,i,j;
    while(scanf("%d",&N)!=EOF && N>0){
            for(i=0;i<=N;i++){
                G[i].clear(),colour[i]=0,vis[i]=0;
            }
            flag=1;
    scanf("%d",&E);
    while(E--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(i=1;i<=N;i++){
        if(vis[i]==0){
            vis[i]=1;
            colour[i]=1;
            dfs(i);
        }
    }
    if(flag==0)
        cout<<"NOT BICOLORABLE."<<endl;
        else
        cout<<"BICOLORABLE."<<endl;
}
    }

