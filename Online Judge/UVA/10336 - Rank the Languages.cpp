#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
int fx[] = {1 , -1 , 0 , 0};
int fy[] = {0 , 0 , 1 , -1};
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
struct node
{
    int u,v;
    node(int i,int j)
    {
        u=i;
        v=j;
    }
};
int arr[500][500];

int vis[500][500];
int row,col;
void BFS(int sx,int sy,int val)
{
    vis[sx][sy]=1;
    queue<node>q;
    q.push(node(sx,sy));
    while(!q.empty())
    {
        node top=q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int tx=top.u+fx[k];
            int ty=top.v+fy[k];
            if(vis[tx][ty]==0 && tx>=0 && ty>=0 && tx<row && ty<col && arr[tx][ty]==val)
            {
                vis[tx][ty]=1;
                q.push(node(tx,ty));
            }
        }
    }
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
    int n,m;
    sc2(n,m);
    row=n,col=m;
    mem(arr,0);
    rep(i,n)
    {
        string a;
        cin>>a;
        rep(j,m)
        {
            int tmp=a[j]-'a';
            arr[i][j]=tmp;
        }
    }
    int sv[27]= {0};
    mem(vis,0);
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vis[i][j]==0)
            {
                BFS(i,j,arr[i][j]);
                sv[arr[i][j]]++;
                cnt++;
            }
        }
    }
    int T[26]={0};
    int ser[26];
    for(int i=0;i<26;i++){
        ser[i]=i;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            if(sv[i]>sv[j]){
                swap(sv[i],sv[j]);
                swap(ser[i],ser[j]);
            }
            if(sv[i]==sv[j] && sv[i]>0 && ser[j]>ser[i]){
                swap(sv[i],sv[j]);
                swap(ser[i],ser[j]);
            }
        }
    }
                    pr("World #%d\n",++te);

    for(int i=0;i<26;i++){
        if(sv[i]>0){
            pr("%c: %d\n",ser[i]+'a',sv[i]);
        }
    }
}
}
