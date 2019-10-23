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
#define mx 10005
#define inf 1000000
VI G[mx];
int vis[mx],par[mx],low[mx],dis[mx],tme,ans;
map<int,int>mp;
void init()
{
    for(int i=0;i<=mx;i++)
    {
        G[i].clear();
        par[i]=0;
        vis[i]=0;
        low[i]=inf;
    }
}
void dfs(int u)
{
    tme++;
    dis[u]=tme;
    low[u]=tme;
    vis[u]=1;
    int cnt=0;
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(par[u]==v)
            continue;
        if(vis[v]==1)
        {
            low[u]=min(low[u],dis[v]);
        }
        if(vis[v]==0)
        {
            cnt++;
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(low[v]>= dis[u] && par[u]!=0 && mp[u]==0){
                ans++;
                mp[u]=1;
            }
            if(par[u]==0 && cnt>1 && mp[u]==0)
            {
                ans++;
                mp[u]=1;
            }
        }
    }
}
int main()
{
    int n,m,test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d%d",&n,&m);
    init();
    while(m--)
    {
        int a,b;
        sc("%d%d",&a,&b);
        G[a].p_b(b);
        G[b].p_b(a);
    }
    tme=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
            dfs(i);
    }
    mp.clear();
    pr("Case %d: %d\n",++te,ans);
}
}

