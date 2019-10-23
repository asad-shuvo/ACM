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
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
ll tree[Mx*4+5];
ll a[Mx],b[Mx];
void update(ll  n,ll  b,ll  e,ll  x,ll  val)
{
    if(b>x || e<x)return;
    if(x==e && x==b){
        tree[n]+=val;
        tree[n]%=1000000007;
        return;
    }
    ll  l=(n*2);
    ll  r=l+1;
    ll  mid=(b+e)/2;
    update(l,b,mid,x,val);
    update(r,mid+1,e,x,val);
    //tree[n]%=MOD;
    tree[n]=(tree[l]+tree[r])%MOD;
    //tree[n]%=MOD;
}
ll query(ll  n,ll  b,ll  e,ll  i,ll  j)
{
   if(i>e or j<b)return 0;
    if(b>=i and e<=j){
        return tree[n];
    }
    ll  l=(n*2);
    ll  r=l+1;
    ll  mid=(b+e)/2;
    ll  q1=query(l,b,mid,i,j);
    ll  q2=query(r,mid+1,e,i,j);
    return (q1+q2)%MOD;
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
        ll n;
        scL1(n);
        for(ll i=1;i<=n;i++){
            scL1(a[i]);
            b[i]=a[i];
        }
        sort(b+1,b+n+1);
        mem(tree,0);
        for(ll  i=1;i<=n;i++){
            ll val=a[i];
            ll pos=lower_bound(b+1,b+1+n,val)-b;
           // cout<<pos<<endl;
           if(pos==1){
            update(1,1,n,1,1);
           }
           else{
            ll ret=query(1,1,n,1,pos-1)+1;
            ret%=MOD;
            update(1,1,n,pos,ret);
           }
        }
        pr("Case %d: %lld\n",++te,tree[1]);
    }
}

