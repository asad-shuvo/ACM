#include <bits/stdc++.h>
using namespace std;
#define mx 3000
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
int vis[mx];
vector<int>G[mx];
int dis[mx];
int arr[mx];
int ans[mx];
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
                ans[dis[v]]++;
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
        memset(ans, 0, sizeof(ans));
        int B=BFS(src);
        if(B==0)
            printf("0\n");
        //cout<<BFS(src)<<endl;
        else
        {
            int mxx=0;
            int day;
            for(int i=0; i<200; i++)
            {
                if(mxx<ans[i])
                {
                    mxx=ans[i];
                    day=i;
                }
            }
            printf("%d %d\n",mxx,day);
        }
    }
    }
}
