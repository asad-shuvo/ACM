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
#define Mx 100005
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
ll tree[Mx*4+5];
ll lazy[Mx*4+5];
void init(int l,int hi,int node)
{
    if(l==hi){
        tree[node]=0;
    return;
    }
    int mid=(l+hi)/2;
    init(l,mid,node*2+1);
    init(mid+1,hi,node*2+2);
    tree[node]=tree[node*2+1]+tree[node*2+2];
}
ll getSum(int l,int hi,int node,int i,int j)
{
    if(lazy[node]!=0){
        tree[node]+=(hi-l+1)*lazy[node];

        if(l!=hi){
            lazy[node*2+1]+=lazy[node];
            lazy[node*2+2]+=lazy[node];
        }
        lazy[node]=0;
    }
     if(i>hi ||j<l)
        return 0;
    if(l>=i && hi<=j)
        return tree[node];

    int mid=(l+hi)/2;
    return getSum(l,mid,node*2+1,i,j)+getSum(mid+1,hi,node*2+2,i,j);
}
void updateRange(int l,int hi,int node,int i,int j,int newVal)
{
    if(lazy[node]!=0){
        tree[node]+=(hi-l+1)*lazy[node];

        if(l!=hi){
            lazy[node*2+1]+=lazy[node];
            lazy[node*2+2]+=lazy[node];
        }
        lazy[node]=0;
    }
     if(i>hi ||j<l)
        return ;
    if(l>=i && hi<=j){

        tree[node]+=(hi-l+1)*newVal;

        if(l!=hi){
            lazy[node*2+1]+=newVal;
            lazy[node*2+2]+=newVal;
        }
        return;

    }
    int mid=(l+hi)/2;
    updateRange(l,mid,2*node+1,i,j,newVal);
    updateRange(mid+1,hi,2*node+2,i,j,newVal);
    tree[node]=tree[node*2+1]+tree[node*2+2];
}
int main()
{
   //FILE
    int test,te=0;
    sc1(test);
    while(test--){
            pr("Case %d:\n",++te);
        int n,m;
        sc2(n,m);
        for(int i=0;i<=Mx*4;i++){
            tree[i]=lazy[i]=0;
        }
        init(0,n-1,0);
        while(m--){
            int tsk;
            sc1(tsk);
            if(tsk==1){
                int i,j;
                sc2(i,j);
                ll ret=getSum(0,n-1,0,i,j);
                pr("%lld\n",ret);
            }
            if(tsk==0){
                int i,j,v;
                sc3(i,j,v);
                updateRange(0,n-1,0,i,j,v);

            }
        }
    }
}
