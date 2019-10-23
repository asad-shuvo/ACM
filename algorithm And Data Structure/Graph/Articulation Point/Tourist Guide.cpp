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
#define inf 10000000
VI G[mx];
vector<string>str,art;
int vis[mx],dis[mx],low[mx],par[mx];
map<int,int>mp;
int ans,tme;
void init()
{
    int i;
    FOR(i,0,mx)
    {
        vis[i]=0;
        dis[i]=0;
        low[i]=inf;
        par[i]=0;
        G[i].clear();
    }
}
void dfs(int u)
{
    tme++;
    vis[u]=1;
    dis[u]=tme;
    low[u]=tme;
    int cnt=0;
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(par[u]==v) continue;
        if(vis[v]==1) low[u]=min(dis[v],low[u]);
        if(vis[v]==0)
        {
            cnt++;
            par[v]=u;
            dfs(v);
            low[u]=min(low[v],low[u]);
            if(dis[u]<=low[v] && par[u]!=0 && mp[u]==0)
            {
                ans++;
                mp[u]=1;

                art.p_b(str[u-1]);
            }
            if(cnt>1 && par[u]==0 && mp[u]==0)
            {
                ans++;
                mp[u]=1;
                art.p_b(str[u-1]);
            }
        }
    }

}
int main()
{
   // FILE

    int n,test,te=0,tes=0;
    while(sc("%d",&n)&&n>0){
             map<string,int>mpstr;
        tes++;
            if(tes>1)cout<<endl;
    for(int i=1;i<=n;i++)
    {
        string a,b;
        cin>>a;
        str.p_b(a);
        mpstr[a]=i;
    }
    init();
    int m;
    sc("%d",&m);
    while(m--)
    {
        string a,b;
        cin>>a>>b;
        int u=mpstr[a];
        int v=mpstr[b];
        //cout<<u<<" "<<v<<endl;
        G[u].p_b(v);
        G[v].p_b(u);
    }
    ans=0,tme=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
    pr("City map #%d: %d camera(s) found\n",++te,ans);
    sort(art.begin(),art.end());
    for(int i=0;i<art.size();i++)
        cout<<art[i]<<endl;
    //cout<<ans<<endl;
art.clear();
mp.clear();
mpstr.clear();
str.clear();
}
}
