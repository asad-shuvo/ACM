#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define llu unsigned long long
#define Mx 100005
#define mx 1005
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
#define pii pair<int,int>

int row,col;
int arr[22][22],vis[22][22],dis[22][22];
void BFS(int sx,int sy){
    queue<pii>q;
    q.push(pii(sx,sy));
    vis[sx][sy]=1;
    dis[sx][sy]=0;
    while(!q.empty()){
        pii top=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int tx=top.first+fx4[i];
            int ty=top.second+fy4[i];

            if(tx>=0 && ty>=0 && tx<row && ty<col && arr[tx][ty]==0 and vis[tx][ty]==0){
                vis[tx][ty]=1;
                dis[tx][ty]=dis[top.first][top.second]+1;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
    sc2(row,col);
    mem(arr,0);
    int x1,x2,x3,y1,y2,y3,hx,hy;
    for(int i=0; i<row; i++)
    {
        string a;
        cin>>a;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j]=='#')arr[i][j]=1;
            if(a[j]=='.') arr[i][j]=0;
            if(a[j]=='a')
            {
                x1=i;
                y1=j;
                arr[i][j]=0;
            }
            if(a[j]=='b')
            {
                x2=i;
                y2=j;
                arr[i][j]=0;
            }
            if(a[j]=='c')
            {
                x3=i;
                y3=j;
                arr[i][j]=0;
            }
            if(a[j]=='m')
                arr[i][j]=1;
    if(a[j]=='h'){
        hx=i;
        hy=j;
    }
        }
    }
mem(vis,0);
    BFS(x1,y1);
    int r1=dis[hx][hy];
    mem(vis,0);
   // cout<<r1<<endl;
    BFS(x2,y2);
    int r2=dis[hx][hy];
    mem(vis,0);
    BFS(x3,y3);
    int r3=dis[hx][hy];

    int r=max(r1,r2);
    r=max(r,r3);
    pr("Case %d: %d\n",++te,r);

}
}
