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
int tree1[Mx*4+5];
int tree2[Mx*4+5];
int arr[Mx+5];
void init1(int l,int h,int nod)
{
    if(l==h){
        tree1[nod]=arr[l];
        return;
    }
    int mid=(l+h)/2;
    init1(l,mid,nod*2+1);
    init1(mid+1,h,nod*2+2);
tree1[nod]=min(tree1[nod*2+1],tree1[nod*2+2]);
}
void init2(int l,int h,int nod)
{
    if(l==h){
        tree2[nod]=arr[l];
        return;
    }
    int mid=(l+h)/2;
    init2(l,mid,nod*2+1);
    init2(mid+1,h,nod*2+2);
tree2[nod]=max(tree2[nod*2+1],tree2[nod*2+2]);
}
int query1(int l,int h,int nod,int i,int j)
{
    if(i>h or j<l)return INT_MAX;
    if(i<=l and j>=h){
        return tree1[nod];
    }
    int mid=(l+h)/2;
    return min(query1(l,mid,nod*2+1,i,j),query1(mid+1,h,nod*2+2,i,j));
}
int query2(int l,int h,int nod,int i,int j)
{
    if(i>h or j<l)return INT_MIN;
    if(i<=l and j>=h){
        return tree2[nod];
    }
    int mid=(l+h)/2;
    return max(query2(l,mid,nod*2+1,i,j),query2(mid+1,h,nod*2+2,i,j));
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
        int n,d;
        sc2(n,d);
        fori(n)sc1(arr[i]);
        init1(0,n-1,0);
        init2(0,n-1,0);
        int MM=-1;
        fori(n){
        int j=(i+d-1);
        int ret1=query1(0,n-1,0,i,j);
        int ret2=query2(0,n-1,0,i,j);
        MM=max(MM,ret2-ret1);

        }
        pr("Case %d: %d\n",++te,MM);
    }
}


