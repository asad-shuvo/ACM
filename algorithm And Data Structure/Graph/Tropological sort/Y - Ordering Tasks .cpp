#include<bits/stdc++.h>
using namespace std;
#define mx 105555
vector<int>edge[mx],ans;
int vis[mx];
bool cycle;
void dfs(int u)
{
    if(!cycle)
        return;
        vis[u]=1;
    for(int i=0;i<edge[u].size();i++){
            int v=edge[u][i];

             if(vis[v]==1) {
        cycle=false;
        return;
    }
         if(vis[v]==0) dfs(v);
    }
        ans.push_back(u);
    vis[u]=2;

}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)&& (n || m)){
            for(int i=1;i<=n;i++){
    edge[i].clear();
    vis[i]=0;
            }

    while(m--){
        int a,b;
        scanf("%d%d",&a,&b);
        edge[a].push_back(b);
    }
    //memset(vis,0,sizeof(vis));
    cycle=true;
    ans.clear();
    for(int i=1;i<=n && cycle ;i++){
            if(vis[i]==0)
        dfs(i);
    }
    if(!cycle)printf("IMPOSSIBLE\n");
    else{
    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<endl;
    }

//ans.clear();
        //cout<<endl;
}
}


