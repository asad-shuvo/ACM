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
#define mx 1005
VI G[mx],art3,art4;
int vis[mx],par[mx],dis[mx],low[mx],road[mx][mx];
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
    memset(road,0,sizeof(road));
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
        if(vis[v]==1){ low[u]=min(low[u],dis[v]);
        if(!road[v][u])  road[u][v]=1;}
        if(vis[v]==0)
        {
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<low[v])
            {
               // cout<<u<<" "<<v<<endl;
                ans++;
                road[u][v]=road[v][u]=1;
            }
            else{
                if(!road[v][u])road[u][v]=1;
            }

        }
    }
}
int main()
{
   // FILE
    int n,m,te=0;
    while(sc("%d%d",&n,&m)&& n>0 && m>0){
    vector<int>art1,art2;
    init();
    while(m--){
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
    pr("%d\n\n",++te);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
                if(road[i][j]==1)
                pr("%d %d\n",i,j);
        }
    }
    cout<<"#"<<endl;

}
}

/*
7 9
1 2
1 3
1 4
2 4
3 4
4 5
5 6
5 7
7 6
*/

