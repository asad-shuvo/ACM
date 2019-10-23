#include <bits/stdc++.h>
using namespace std;
#define mx 100005
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
vector<int>G[mx];
int vis[mx];
int dis[mx];
void BFS(int source)
{
    vis[source]=1;
    queue<int>q;
    int p;
    q.push(source);
    dis[source]=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                dis[v]=dis[u]+1;
                p=dis[v];
     //           if(v==des)
       //             return p;
                q.push(v);
            }
        }
    }
   // return p;
}//
int main()
{
   // f_i
    //f_o
    int test,m=0;
    cin>>test;
    while(test--){
            m++;
    if(m>1)
        cout<<endl;
    int E;
    cin>>E;
     memset(vis,0,sizeof(vis));
    for(int i=0;i<=mx;i++)
    G[i].clear();
    for(int i=0;i<E;i++)
    {
        int r,x,y,n;
        cin>>r>>n;
        while(n--){
            cin>>x;
            G[r].push_back(x);
           // G[x].push_back(r);
        }
    }

    int x1,y1;
    cin>>x1>>y1;
    BFS(x1);
    cout<<x1<<" "<<y1<<" "<<dis[y1]-1<<endl;
}
}


