#include <bits/stdc++.h>
using namespace std;
#define mx 1500
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[mx];
int vis[mx];
int dis[mx];
void BFS(int source)
{
    vis[source]=1;
    queue<int>q;
    q.push(source);
    ///dis[source]=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    //f_i
    //f_o
    int test,m=0;
    scanf("%d",&test);
    while(test--){
            m++;
    if(m>1)
        cout<<endl;
            for(int i=0;i<mx;i++)
           {
             G[i].clear();
             vis[i]=0;
             dis[i]=0;
           }
    int p,d;
    scanf("%d%d",&p,&d);
    while(d--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    BFS(0);
    for(int i=1;i<p;i++)
    {
        printf("%d\n",dis[i]);
    }
    }
}

