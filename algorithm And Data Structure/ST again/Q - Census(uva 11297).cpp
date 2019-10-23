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
#define Mx 505
//#define mx 505
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
struct data{
ll mn,mx;
}tree[Mx*Mx*4];
ll arr[Mx*Mx];
ll MM,MN;
void init(ll node,ll b,ll e)
{
    if(b==e){
        tree[node].mx=arr[b];
        tree[node].mn=arr[b];
        return;
    }
    ll mid=(b+e)/2;
    ll l=node*2;
    ll r=l+1;
    init(l,b,mid);
    init(r,mid+1,e);
    tree[node].mx=max(tree[l].mx,tree[r].mx);
    tree[node].mn=min(tree[l].mn,tree[r].mn);
}
void query(ll node,ll b,ll e,ll i,ll j)
{
      if(e<i or b>j){
        return;
    }
    if(i<=b and j>=e){
        MM=max(MM,tree[node].mx);
        MN=min(MN,tree[node].mn);
    return;
    }

    ll mid=(b+e)/2;
    ll l=node*2;
    ll r=l+1;
    query(l,b,mid,i,j);
    query(r,mid+1,e,i,j);
}
void update(ll node,ll b,ll e,ll i,ll val)
{
     if(i>e or i<b)
        return;
    if(b==i and e==i){
        tree[node].mx=val;
        tree[node].mn=val;
        return;
    }
    ll mid=(b+e)/2;
    ll l=node*2;
    ll r=l+1;
    update(l,b,mid,i,val);
    update(r,mid+1,e,i,val);
    tree[node].mx=max(tree[l].mx,tree[r].mx);
    tree[node].mn=min(tree[l].mn,tree[r].mn);
}
int main()
{
    int n;
    sc1(n);
    for(int i=1;i<=n*n;i++){
        sc1(arr[i]);
    }
    init(1,1,n*n);
    int q;
    sc1(q);
   getchar();
    while(q--){
            char c;
    sc("%c",&c);
        if(c=='q'){
                MM=-999999999999999;
        MN=99999999999999999;
            ll x1,y1,x2,y2;
            scL3(x1,y1,x2);
            scL1(y2);
            getchar();
            while(x1<=x2){
                ll st=(x1-1)*n+y1;
                ll ed=(x1-1)*n+y2;
                query(1,1,n*n,st,ed);
                x1++;
            }

            pr("%lld %lld\n",MM,MN);
        }
        else{
            ll x,y,val;
            scL3(x,y,val);
            getchar();
            ll st=(x-1)*n+y;
            update(1,1,n*n,st,val);
        }
    }
}


