#include <bits/stdc++.h>
using namespace std;
vector<int>G[10005];
int vis[105];
int BFS(int sourse)
{
    int cnt=0;
//cout<<sourse<<endl;
    queue<int>q;
    q.push(sourse);
    vis[sourse]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(v==sourse)
            {
                return 1;
            }
            if(vis[v]==0)
            {
                vis[v]=1;
                // cout<<v<<endl;
                q.push(v);
            }
        }
    }
    return cnt;
}
int main()
{
    int test,m=0;
    scanf("%d",&test);
    while(test--)
    {
        memset(vis,0,sizeof(vis));
        for(int i=0; i<=10004; i++)
        {
            //vis[i]=0;
            G[i].clear();
        }
        int N,M;
        scanf("%d%d",&N,&M);
        while(M--)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            G[x].push_back(y);
        }
        int    cntt=0;
        for(int i=1; i<=N; i++)
        {
            memset(vis,0,sizeof(vis));
            cntt+=BFS(i);
        }
        // cout<<N-cntt<<endl;

        // cout<<BFS(1)<<endl;
        //cout<<cntt<<endl;
        //}
        printf("Case %d: %d\n",++m,N-cntt);
    }
}

