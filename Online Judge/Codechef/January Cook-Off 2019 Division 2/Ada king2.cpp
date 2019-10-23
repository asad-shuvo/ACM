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
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
#define Mx 100005
#define mx 10005
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)
int row=8,col=8,vis[8][8],dis[8][8],cnt=0;
int BFS(int sx,int sy,int t)
{
    memset(vis, 0, sizeof(vis));
    mem(dis,0);
    vis[sx][sy] = 1;
    cnt++;
    dis[sx][sy]=0;
    queue <pii> q;
    q.push(pii(sx,sy));
     while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int k=0; k<8; k++)
        {
            int tx = top.first + fx8[k];
            int ty = top.second + fy8[k];
            if(tx>=1 && ty>=1 && tx<=row && ty<=col && vis[tx][ty]== 0)
            {
                vis[tx][ty] = 1;
                dis[tx][ty] = dis[top.first][top.second] + 1;
                if(dis[tx][ty]<=t){

                q.push(pii(tx,ty));
                cnt++;

                }
            }
        }
    }
    return cnt;
}
int main()
{
    int test;
    sc1(test);
    while(test--){
            cnt=0;
    int r,c,t;
    sc3(r,c,t);
    pr("%d\n",BFS(r,c,t));
    }
}

