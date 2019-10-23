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
struct strk{
int position,maxi;
}tree[Mx*4+5],base;
int arr[Mx+5];
void update(int node,int b,int e,int i,int val)
{
    if(i>e or i<b)return;
    if(b==e){
        tree[node].maxi=val;
        tree[node].position=i;
        return;
    }
    int n=node<<1;
int    mid=(b+e)/2;
    update(n,b,mid,i,val);
    update(n+1,mid+1,e,i,val);
    if(tree[n].maxi>tree[n+1].maxi){
        tree[node].maxi=tree[n].maxi;
        tree[node].position=tree[n].position;
    }
    else{
        tree[node].maxi=tree[n+1].maxi;
        tree[node].position=tree[n+1].position;
    }
}
strk query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return base;
    if(e<=j && b>=i) return tree[node];
    int mid=(b+e)/2;
    int n=node*2;
    strk ret1=query(n,b,mid,i,j);
    strk ret2=query(n+1,mid+1,e,i,j);
    if(ret1.maxi>ret2.maxi)return ret1;
    else return ret2;
}
int main()
{
    int n;
    while(sc1(n)==1){
        fori1(n){
        sc1(arr[i]);
        update(1,1,n,i,arr[i]);
        }
        int q;
        sc1(q);
        while(q--){
            char Q;
            cin>>Q;
            int i,j;
            sc2(i,j);
            if(Q=='Q'){
                strk ret1=query(1,1,n,i,j);
                int pos=ret1.position;
                int m1=ret1.maxi;
                update(1,1,n,pos,0);
                ret1=query(1,1,n,i,j);
                update(1,1,n,pos,m1);
                int m2=ret1.maxi;
                pr("%d\n",m2+m1);
            }
            else{
                    arr[i]=j;
                update(1,1,n,i,j);
            }
        }
    }
}


