#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define Mx 100005
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
ll  vis[Mx],cost[Mx];
vector<ll>G[Mx];
ll   mm;
ll  bfs(ll  source){
    mm=min(mm,cost[source]);
    vis[source]=1;
    queue<ll>q;
    q.push(source);
    while(!q.empty()){
        ll  u=q.front();
        q.pop();
        for(ll  i=0;i<G[u].size();i++){
            ll  v=G[u][i];
            if(vis[v]==0){
              mm=min(mm,cost[v]);
              vis[v]=1;
              q.push(v);
            }
        }
    }
    return mm;
}
int main()
{
    ll  n,m;
    sc("%lld%lld",&n,&m);
    for(ll  i=1;i<=n;i++)sc1(cost[i]);
    for(ll  i=1;i<=m;i++){
        ll  x,y;
        sc2(x,y);
        G[x].p_b(y);
        G[y].p_b(x);
    }
    ll  sum=0;
    for(ll  i=1;i<=n;i++){
        mm=INT_MAX;
        if(vis[i]==0){
            vis[i]=1;
            ll  ret=bfs(i);
            sum+=ret;
        }
    }
    pr("%lld\n",sum);
}

