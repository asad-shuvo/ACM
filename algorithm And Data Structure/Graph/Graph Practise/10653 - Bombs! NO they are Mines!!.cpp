#include <bits/stdc++.h>
using namespace std;

int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int

#define llu unsigned long long
#define inf 1<<28
#define gama 0.57721566490
#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
#define all(r)(r).begin(),(r).end()
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
#define TEST int test,te=0;sc1(test);
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
#define Mx 100005
#define mx 1005
int r,c;
int vis[mx][mx];
vector<int>G[mx];
int mat[mx][mx];
int dis[mx][mx];
#define pii pair<int,int>

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
void bfs(int sx,int sy)
{
	queue<pii>q;
	q.push(pii(sx,sy));
	vis[sx][sy]=1;
	dis[sx][sy]=0;
	while(!q.empty()){
		pii tp=q.front();q.pop();
		for(int i=0;i<4;i++){
			int tx=tp.first+fx[i];
			int ty=tp.second+fy[i];
			if(tx<r and tx>=0 and ty<c and ty>=0 and mat[tx][ty]!=1 and vis[tx][ty]==0){
				vis[tx][ty]=1;
				dis[tx][ty]=dis[tp.first][tp.second]+1;
				q.push(pii(tx,ty));
			}
		}
	}
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);///Beware of use it, if u use it dont use scanf or printf
    while(cin>>r>>c){
    	memset(mat,0,sizeof(mat));
    	memset(vis,0,sizeof(vis));
    	memset(dis,0,sizeof(dis));
    	if(r==0 and c==0)break;
    	int row;
    	cin>>row;
    	while(row--){
    		int ra,b;
    		cin>>ra>>b;
    		for(int i=0;i<b;i++){
    			int x;
    			cin>>x;
    			mat[ra][x]=1;
			}
		}
    	int srx,sry,dsx,dsy;
    	cin>>srx>>sry>>dsx>>dsy;
    	bfs(srx,sry);
    	cout<<dis[dsx][dsy]<<endl;
    	
	}
    
}

