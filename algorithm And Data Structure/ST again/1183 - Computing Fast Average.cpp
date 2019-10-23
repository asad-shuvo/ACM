#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1, -1, 0, 0};
int fy4[] = {0, 0, 1, -1};
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
ll BM( ll a, ll b, ll m )
{
    if ( b == 0 )
        return 1 ;
    ll x = BM(a,b/2,m);
    x = (( x % m) * (x % m))%m;

    if( b % 2 )
        x = (( x % m) * (a %m)) % m ;
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
int  tree[Mx*4+5];
int  lazy[Mx*4+5];
void init(int  n,int  b,int  e)
{
    if(b==e)
    {
        tree[n]=0;
        return;
    }
    int  l=n*2;
    int  r=l+1;
    int  mid=(b+e)/2;
    init(l,b,mid);
    init(r,mid+1,e);
    tree[n]=tree[l]+tree[r];
}
void update(int  n,int  b,int  e,int  i,int  j,int  val)
{
    if(lazy[n]!=-1)
    {
        tree[n]=(e-b+1)*lazy[n];
        if(b!=e)
        {
            lazy[n*2]=lazy[n];
            lazy[n*2+1]=lazy[n];
        }
        lazy[n]=-1;
    }
    if(i>e or j<b)
        return;
    if(b>=i and e<=j)
    {
        tree[n]=(e-b+1)*val;
        if(b!=e)
        {
            lazy[n*2]=val;
            lazy[n*2+1]=val;
        }
        return;
    }
    int   mid=(b+e)/2;
    update(n*2,b,mid,i,j,val);
    update(n*2+1,mid+1,e,i,j,val);
    tree[n]=tree[n*2]+tree[n*2+1];
}
int  query(int  n,int  b,int  e,int  i,int  j)
{

    if(lazy[n]!=-1)
    {
        tree[n]=(e-b+1)*lazy[n];
        if(b!=e)
        {
            lazy[n*2]=lazy[n];
            lazy[n*2+1]=lazy[n];
        }
        lazy[n]=-1;
    }
    if(i>e ||j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[n];
    int   mid=(b+e)/2;
    return query(n*2,b,mid,i,j)+query(n*2+1,mid+1,e,i,j);
}
int  gcd(int  a, int  b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    int te=0,test;
    sc1(test);
    while(test--)
    {
        mem(tree,0);
        mem(lazy,-1);
        int  n,q;
        sc2(n,q);
        init(1,1,n);
        pr("Case %d:\n",++te);
        while(q--)
        {
            int  tsk,i,j;

            sc3(tsk,i,j);
            i++;
            j++;
            if(tsk==1)
            {
                int  val;
                sc1(val);
                update(1,1,n,i,j,val);
            }
            else
            {
                int  ret=query(1,1,n,i,j);

                int  D=(j-i+1);

                int  dv=gcd(ret,D);
                ret /= dv;
                D /= dv;
                if(D==1)
                    printf("%d\n",ret);
                else if(ret == 0)
                    puts("0");
                else
                    printf("%d/%d\n", ret, D);
            }
        }
    }
}
