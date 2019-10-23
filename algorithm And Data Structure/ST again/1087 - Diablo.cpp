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
#define Mx 150000
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
int tree[Mx*4+5];
int arr[Mx+5];
int ans;
void init(int node,int b,int e,int n)
{
    if(b==e){
        if(b<=n){
            tree[node]=1;
        }
        else tree[node]=0;
        return ;
    }
    int mid=(b+e)/2;
    init(node*2,b,mid,n);
    init(node*2+1,mid+1,e,n);
    tree[node]=tree[node*2]+tree[node*2+1];
}
void update(int node,int b,int e,int n)
{
    if(e<n or b>n)return;
    if(b==e and n==b){
        tree[node]=1;
        return;
    }
    int mid=(b+e)/2;
    update(node*2,b,mid,n);
    update(node*2+1,mid+1,e,n);
    tree[node]=tree[node*2]+tree[node*2+1];
}
void query(int node,int b,int e,int x){
if(b==e){
    ans=arr[b];
    tree[node]=0;
    return;
}
int mid=(b+e)/2;
int left=(node*2);
int rt=(node*2+1);
if(tree[left]>=x){
    query(node*2,b,mid,x);
}
else{
    query(node*2+1,mid+1,e,x-tree[left]);
}
tree[node]=tree[left]+tree[rt];
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
        int n,m;
        sc2(n,m);
pr("Case %d:\n",++te);
        fori1(n){
        sc1(arr[i]);
        }
        init(1,1,Mx,n);
        while(m--){
            char c;
            int k;
            getchar();
            sc("%c%d",&c,&k);
            if(c=='c'){
                    if(k>tree[1])pr("none\n");
            else{
                query(1,1,Mx,k);
                pr("%d\n",ans);
            }
            }
            else{
                    n++;
            arr[n]=k;
                update(1,1,Mx,n);
            }

        }
    }
}

