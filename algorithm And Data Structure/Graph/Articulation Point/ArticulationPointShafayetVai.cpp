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
#define inf 1000000
VI G[mx],art;
int vis[mx],dis[mx],par[mx],lo[mx];
int tme,root,ans;
map<int,int>mp;

void init()
{
    int i;
    FOR(i,0,mx){
    vis[i]=0;
    dis[i]=0;
    par[i]=0;
    lo[i]=inf;
    }
}

void dfs(int u)
{
    vis[u]=1;
    tme++;
    dis[u]=tme;
    lo[u]=tme;
    int cnt=0;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(par[u]==v)
        {
            continue;
        }
        if(vis[v]==1)///BackEdge
        {
            lo[u]=min(lo[u],dis[v]);
        }
        if(vis[v]==0)
        {
            cnt++;
            par[u]=v;
            dfs(v);
            lo[u]=min(lo[u],lo[v]);
            if(dis[u]<=lo[v] && par[u]!=0 && mp[u]==0)
            {
                ans++;
                mp[u]=1;
                //art.p_b(u);
            }
            if(par[u]==0 && cnt>1 && mp[u]==0)
            {
                ans++;
                mp[u]=1;
               // art.p_b(u);
            }
        }
    }

}
int main()
{

    int n,m,i,test,te=0;
    sc("%d",&test);
    while(test--){
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
    pr("Case %d: %d\n",++te,ans);
/*
    FOR(i,0,art.size()-1)
    cout<<art[i]<< " ";*/
    mp.clear();
    for(int i=0;i<=mx;i++)
        G[i].clear();
    }
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
