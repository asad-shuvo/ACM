#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
VI G[mx];
int vis[mx],cnt;
int dfs(int u)
{
    vis[u]=1;
    cnt++;
    for(int i=0;i<G[u].size();i++)
    {
        if(vis[G[u][i]]==0)
        {
  //          cnt++;
            vis[G[u][i]]==1;
            dfs(G[u][i]);
        }
    }
}
int main()
{
    int n;
    while(sc("%d",&n) && n>0){
                for(int i=0;i<=mx;i++)
    {
        G[i].clear();
        vis[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        int m;
        sc("%d",&m);
        while(m--)
        {
            int u;
            sc("%d",&u);
            G[i].p_b(u);
        }
    }
    int ret=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        cnt=0;
        memset(vis,0,sizeof(vis));
            dfs(i);
            if(cnt>ans){
             ans=cnt;   ret=i;
            }
    }
    cout<<ret<<endl;

    }

}


