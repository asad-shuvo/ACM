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
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
#define Mx 100005
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
 int mat[51][51];
 int n;
 int mn=INT_MAX;
 int vis[51][51];
 int v[51][51];
    int r1,r2,c1,c2;
void dfs2(int x,int y,int s1,int s2)
 {
     //cout<<x<<y<<endl;
     if(v[x][y]==1 or x>=n or y>=n or x<0 or y<0 or mat[x][y]==1)return;
    // cout<<x<<" "<<y<<" "<<s1<<" "<<s2<<endl;
     int dis=((x-s1)*(x-s1))+((y-s2)*(y-s2));
     mn=min(dis,mn);
     //cout<<mn<<endl;
     v[x][y]=1;
     dfs2(x-1,y,s1,s2);
     dfs2(x+1,y,s1,s2);
     dfs2(x,y+1,s1,s2);
     dfs2(x,y-1,s1,s2);

 }
 void dfs1(int i,int j)
 {
//cout<<i<<j<<endl;
     if(vis[i][j]==1 or i>=n or j>=n or i<0 or j<0 or mat[i][j]==1)return;
     vis[i][j]=1;
     mem(v,0);
     dfs2(r2-1,c2-1,i,j);
     dfs1(i+1,j);
     dfs1(i-1,j);
     dfs1(i,j+1);
     dfs1(i,j-1);

 }

int main()
{
    //__FastIO;
    //int n;
    sc1(n);

    sc3(r1,c1,r2);
    sc1(c2);
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++){
            if(a[j]=='1')mat[i][j]=1;
            else mat[i][j]=0;
        }
    }
    dfs1(r1-1,c1-1);
    cout<<mn<<endl;
}

