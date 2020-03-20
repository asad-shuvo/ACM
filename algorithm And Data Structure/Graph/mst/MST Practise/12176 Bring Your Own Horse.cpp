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
#define TEST int test,te=0;cin>>test;
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
//#define Mx 100005
//#define mx 10005
struct edge{
	int u,v,w;
	bool operator<(const edge& p) const{
		return w<p.w;
	}
};
struct ed{
	int v,w;
};
vector<edge>e;
//vector<int>G[3001];
int par[3001];
vector<ed>G[3001];
int M;
int vis[3001];
int find(int r){
	if(par[r]==r)return r;
	par[r]=find(par[r]);
	return par[r];
}
void mst(int n){
//	cout<<"hi"<<endl;
	sort(e.begin(),e.end());
	for(int i=1;i<=n;i++){
		par[i]=i;
	}
	int cnt=0;
	for(int i=0;i<(int)e.size();i++){
		int u=find(e[i].u);
		int v=find(e[i].v);
		if(u!=v){
			cnt++;
			par[u]=v;
			ed g;
			g.v=e[i].v;
			g.w=e[i].w;
			G[e[i].u].push_back(g);
			ed g1;
			g1.v=e[i].u;
			g1.w=e[i].w;
		//	cout<<e[i].u<<" "<<e[i].v<<" "<<e[i].w<<endl;
			G[e[i].v].push_back(g1);
			if(cnt==n-1)break;
		}
	}
}
void dfs(int sr,int ds,int mx){
	vis[sr]=1;
	for(int i=0;i<G[sr].size();i++){
		int v=G[sr][i].v;
		if(v==ds){
			mx=max(mx,G[sr][i].w);
			M=mx;
			return;
		}
//		int v=G[sr][i];
		if(vis[v]==0){
//			if(v==ds)
vis[v]=1;
			mx=max(mx,G[sr][i].w);
			dfs(v,ds,mx);
		}
	}
}
int main()
{
//	FILE
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);///Beware of use it, if u use it dont use scanf or printf
	TEST
	while(test--){
		e.clear();
		for(int i=0;i<3001;i++){
			G[i].clear();
		}
		int n,r;
		cin>>n>>r;
		for(int i=1;i<=r;i++){
			int u,v,w;
			cin>>u>>v>>w;
			edge get;
			get.u=u;
			get.v=v;
			get.w=w;
			e.push_back(get);
		}
		mst(n);
		int q;
		cin>>q;
//		for(int i=1;i<=n;i++){
//		
//		for(int j=0;j<G[i].size();j++){
//			cout<<i<<" "<<G[i][j].v<<" "<<G[i][j].w<<endl;
//		}
//	}
cout<<"Case "<<++te<<endl; 
		while(q--){
			int x,y;
			cin>>x>>y;
			mem(vis,0);
			M=-1;
			dfs(x,y,0);
			
			cout<<M<<endl;
		}
		cout<<endl;
	}
}

