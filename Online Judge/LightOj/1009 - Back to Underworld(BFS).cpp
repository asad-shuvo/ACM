#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 20005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
VI G[Mx],v;
int vis[Mx];
int par[Mx];
int cnto,cnte;
struct node{
int u,v;
bool operator < (const node& p)const
    {
        return u<p.u;
    }
};
vector<node>e;

void DFS(int u)
{
    vis[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis[v]==0){
            if(par[u]==1){
                par[v]=2;
            }
            else if(par[u]==2)
            {
                par[v]=1;
            }
            DFS(v);
        }
}
}
int main()
{
    //FILE
    int test,te=0,i;
    sc1(test);
    while(test--){
            //int mp[Mx]={0};
            map<int,int>mp;
    int E;
    sc1(E);
    int x,y;
    F(i,1,E){
    sc2(x,y);
    if(mp[x]==0){
        mp[x]=1;
        v.p_b(x);
    }
    if(mp[y]==0){
        mp[y]=1;
        v.p_b(y);
    }
    G[x].p_b(y);
    G[y].p_b(x);
    }
    cnto=0,cnte=0;
    mem(vis,0);
    mem(par,0);
    for( i=0;i<v.size();i++){
            node get;
       get.u=G[v[i]].size();
       get.v=v[i];
    e.p_b(get);
    }
    sort(e.begin(),e.end());
    reverse(e.begin(),e.end());
    for(i=0;i<e.size();i++){
           // cout<<v[i]<<endl;
        if(vis[e[i].v]==0){
                par[e[i].v]=1;
            DFS(e[i].v);
        }
    }
    int co=0,ce=0;
    for(i=0;i<e.size();i++){
        if(par[e[i].v]==1) co++;
        else if(par[e[i].v]==2)ce++;
    }
    e.clear();
    v.clear();
    mp.clear();
    for(i=0;i<=Mx;i++)G[i].clear();
    pr("Case %d: %d\n",++te,max(co,ce));
}
}


