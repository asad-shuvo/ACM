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
#define Mx 100005
#define mx 10005
#define pii pair<int,int>
int row,col;
int vis[25][25];
int mat[25][25];
int dis[25][25];
int M=0;
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
void bfs(int i,int j){
	mem(dis,0);
	mem(vis,0);
	queue<pii>q;
	q.push(pii(i,j));
	dis[i][j]=0;
	while(!q.empty()){
		pii top=q.front();
		q.pop();
		for(int k=0;k<4;k++){
			int kx=top.first+fx[k];
			int ky=top.second+fy[k];
			if(kx>=0 and ky>=0 and kx<row and ky<col and mat[kx][ky]==1 and vis[kx][ky]==0){
				vis[kx][ky]=1;
				dis[kx][ky]=dis[top.first][top.second]+1;
				M=max(M,dis[kx][ky]);
				q.push(pii(kx,ky));
			}
		}
	}
	return;
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);///Beware of use it, if u use it dont use scanf or printf
    cin>>row>>col;
    for(int i=0;i<row;i++){
    	string a;
    	cin>>a;
    	for(int j=0;j<a.size();j++){
    		if(a[j]=='#')mat[i][j]=0;
    		else mat[i][j]=1;
		}
	}
	for(int i=0;i<row;i++){
		int f=0;
		for(int j=0;j<col;j++){
//			cout<<"NEW"<<endl;
		//	mem(vis,0);
		if(mat[i][j]==1)
			bfs(i,j);
			f=1;
			break;
		}
		if(f==1)break;
	}
	cout<<M<<endl;
//	dfs(0,0,0);
}

