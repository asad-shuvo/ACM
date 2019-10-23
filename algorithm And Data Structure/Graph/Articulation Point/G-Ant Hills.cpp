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
#define MI map<int,int>
#define MS map<string,int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 100005
#define p_b push_back
#define inf 1000000000
VI G[mx],art;
int vis[mx],dis[mx],par[mx],low[mx];
int tme,root,ans;
MI mp;

void init()
{
    int i;
    FOR(i,0,mx){
        G[i].clear();
    vis[i]=0;
    dis[i]=0;
    par[i]=0;
    low[i]=inf;
    }
}

void dfs(int u)
{
    vis[u]=1;
    tme++;
    dis[u]=tme;
    low[u]=tme;
    int cnt=0;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(par[u]==v)
        {
            continue;
        }
        if(vis[v]==1)///BackEdge
        {
            low[u]=min(low[u],dis[v]);
        }
        if(vis[v]==0)
        {
            cnt++;
            par[u]=v;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<=low[v] and par[u]!=0 and mp[u]==0)
            {
                ans++;
                mp[u]=1;
                art.p_b(u);
            }
            if(par[u]==0 and cnt>1 and mp[u]==0)
            {
                ans++;
                mp[u]=1;
                art.p_b(u);
            }
        }
    }

}
int main()
{

    int n,m,i;
    init();
    sc("%d%d",&n,&m);
    FOR(i,0,m-1){
    int a,b;
    sc("%d%d",&a,&b);
    G[a].p_b(b);
    G[b].p_b(a);
    }
    tme=0;
    ans=0;
    FOR(i,1,n){
    if(vis[i]==0)
        dfs(i);
    }
    cout<<ans<<endl;

    FOR(i,0,art.size()-1)
    cout<<art[i]<< " ";
    mp.clear();

}
/**

7 7

1 2
1 3
3 4
3 7
4 5
4 6
6 7
*/

