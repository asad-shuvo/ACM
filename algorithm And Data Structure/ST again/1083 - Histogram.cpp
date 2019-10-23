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
#define Mx 30005
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
int tree[Mx*4+5];
int arr[Mx+5];
        int n;

void init(int node,int b,int e)
{
    if(b==e){
        tree[node]=b;
        return;
    }
    int mid=(b+e)/2;
    int left=(node*2);
    int right=(node*2+1);
    init(left,b,mid);
    init(right,mid+1,e);
    if(arr[tree[left]]<=arr[tree[right]]){
        tree[node]=tree[left];
    }
    else
    tree[node]=tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e or j<b)return -1;
    if(b>=i and e<=j)return tree[node];

    int mid=(b+e)/2;
    int left=(node*2);
    int right=(node*2)+1;
int    ind1=query(left,b,mid,i,j);
    int ind2=query(right,mid+1,e,i,j);
    if(ind1==-1 and ind2!=-1)return ind2;
    if(ind1!=-1 and ind2==-1)return ind1;
    if(arr[ind1]<=arr[ind2])return ind1;
    else return ind2;
}
int ser(int b,int e)
{
    if(b>e)return 0;
    if(b==e)return arr[b];
    int indx=query(1,1,n,b,e);
int Area=(e-b+1)*arr[indx];
int area=max(ser(b,indx-1),ser(indx+1,e));
return max(Area,area);
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
        sc1(n);
        fori1(n)sc1(arr[i]);
        init(1,1,n);
int ret=ser(1,n);

        pr("Case %d: %d\n",++te,ret);
        //ret=-1;
    }
}


