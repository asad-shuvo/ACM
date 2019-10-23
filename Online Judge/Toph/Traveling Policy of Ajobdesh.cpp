#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define pii pair<int,int>
#define llu unsigned long long
#define inf 1<<28
#define gama 0.57721566490
#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
/*
bool status[mx];
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
ll BM( ll a , ll b , ll m )
{
    if ( b == 0 ) return 1 ;
    ll x = BM(a,b/2,m);
    x = (( x % m) * (x % m))%m;

    if( b % 2 ) x = (( x % m) * (a %m)) % m ;
    return x ;
}
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
#define scL1(a) scanf("%lld",&a)
#define scL2(a,b) scanf("%lld%lld",&a,&b)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define scL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define fori(N)          for(int i = 0; i<(N); i++)
#define forj(N)         for(int j = 0; j<(N); j++)
#define fork(N)         for(int k = 0; k<(N); k++)
#define forl(N)         for(int l = 0; l<(N); l++)
#define ford(N)         for(int d = 0; d<(N); d++)
#define fori1(N)          for(int i = 1; i<=(N); i++)
#define forj1(N)         for(int j = 1; j<=(N); j++)
#define fork1(N)         for(int k = 1; k<=(N); k++)
#define ford1(N)         for(int d = 1; d<=(N); d++)
#define sqr(x)           (x)*(x)
#define TEST int test,te=0
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
#define Mx 100005
#define mx 10001
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
vector<int>G[mx];
int tcap[mx];
int sdes[mx];
int vis[mx];
int dis[mx];
int bfs(int s,int d)
{

    mem(vis,0);
    vis[s]=1;

    mem(dis,-1);
    dis[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(vis[v]==0){
                vis[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
                if(v==d){
                    return dis[v];
                }
            }
        }

    }
    return dis[d];
}
int main()
{
    int test,te=0;
    sc1(test);

    while(test--){
for(int i=0;i<=mx;i++){
    G[i].clear();
    tcap[i]=-1;
    sdes[i]=-1;
}
        int n,r,c,q;
        sc3(n,r,c);
        sc1(q);
    for(int i=1;i<=r;i++){
        int x,y;
        sc2(x,y);


        G[x].p_b(y);
    }
    for(int i=0;i<n;i++){
           int ret =bfs(i,c);
           tcap[i]=ret;
           int ret1=bfs(c,i);
           //cout<<ret<<endl;

           sdes[i]=ret1;
           //cout<<ret1<<endl;
        }
        pr("Case %d:\n",++te);
    while(q--){
        int s,d;
        sc2(s,d);
    int ret=tcap[s]+sdes[d];
    if(tcap[s]==-1 or sdes[d]==-1){
        pr("Not possible to go from %d to %d.\n",s,d);
    }
    else{
        pr("The shortest distance from %d to %d is %d.\n",s,d,ret);
    }
    }

    }

}

