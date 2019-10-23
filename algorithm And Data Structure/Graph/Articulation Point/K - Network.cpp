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
#define mx 105
VI G[mx];
int vis[mx],par[mx],dis[mx],low[mx];
map<int,int>mp;
int tme,ans;
void init()
{
    int i;
    FOR(i,0,mx)
    {
        vis[i]=0;
        dis[i]=0;
        par[i]=0;
        G[i].clear();
        low[i]=10000000;
    }
}
void dfs(int u)
{
    tme++;
    dis[u]=tme;
    vis[u]=1;
    low[u]=tme;
    int cnt=0;
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(par[u]==v) continue;
        if(vis[v]==1) low[u]=min(low[u],dis[v]);
        if(vis[v]==0)
        {
            cnt++;
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<=low[v] && par[u]!=0 && mp[u]==0)
            {
                ans++;
                mp[u]=1;
            }
            if(cnt>1 && par[u]==0 && mp[u]==0)
            {
                ans++;
                mp[u]=1;
            }
        }
    }
}
int main()
{
    int n;
    while(sc("%d",&n)==1 && n>0)
    {
        int m;
        init();
        while(sc("%d",&m)==1 && m>0)
        {
            int v;
            string a;
            getline(cin,a);
            stringstream ss(a);
            while(ss>>v)
            {
                G[m].p_b(v);
                G[v].p_b(m);
            }
        }
        tme=0,ans=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
                dfs(i);
        }
            cout<<ans<<endl;
            mp.clear();

    }
}

