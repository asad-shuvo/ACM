#include <bits/stdc++.h>
using namespace std;
#define mx 3000
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
int vis[mx];
vector<int>G[mx];
int dis[mx];
int arr[mx];
int BFS(int source)
{
    int take=0;
    queue<int>q;
    //dis[source]=0;
    vis[source]=1;
    q.push(source);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]==0){
                dis[v]=dis[u]+1;
                //arr[dis[v]]++;
                take=1;
                //cout<<dis[v]<<endl;
                vis[v]=1;
                q.push(v);
            }
        }
    }
    return take;
}
int main()
{
   // f_i
   // f_o
    int E;
    while(scanf("%d",&E)==1){
    for(int i=0;i<mx;i++)
    {
        G[i].clear();
    }
    for(int i=0;i<E;i++)
    {
        int n,x,y;
        scanf("%d",&n);

        while(n--){
                scanf("%d",&x);
        G[i].push_back(x);
        }
    }
    int q;
    scanf("%d",&q);
    while(q--){
            int src;
    scanf("%d",&src);
       memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        int B=BFS(src);
        if(B==0)
            printf("0\n");
        //cout<<BFS(src)<<endl;
        else{
int MX=0;
sort(dis,dis+E);
//for(int i=0;i<E;i++)
    //cout<<dis[i]<<" ";
   // cout<<endl;
int day;
int len=0;
      for(int z=0;z<E-1;z++)
            {
              if(dis[z]==dis[z+1])
              {
                  len++;
                  if(len>MX)
                  {
                      MX=len;
                      day=dis[z];
                  }
              }
              else
              {
                  len=1;
                  if(len>MX)
                  {
                      MX=len;
                      day=dis[z];
                  }
              }
            }
            cout<<MX<<" "<<day<<endl;
    }
    }
}
}


