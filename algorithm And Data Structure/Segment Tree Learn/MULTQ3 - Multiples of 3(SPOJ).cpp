#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
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
int n;
struct info{
ll prop,sum;
}tree[Mx*4];
void init()
{
    for(int i=0;i<=n*4;i++)
    {
        tree[i].sum=0;
        tree[i].prop=0;
    }
}
void update(ll node,ll b,ll e,ll i, ll j, ll x)
{
    if(i>e || j<b)return;
    if(b>=i && e<=j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;
}
int query(ll node,ll b,ll e,ll i,ll j,ll carrry)
{
    if(i>e || j<b)return 0;
    if(b>=i && e<=j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        return;
    }
}
int main()
{
    int q;
    sc2(n,q);
    init();
    while(q--){
            int  option;
    sc1(option);
                ll x,y;
            sc("%lld%lld",&x,&y);
    if(option==0){
    update(1,1,n,x+1,y+1,1);
    }
    if(option==1){
        pr("%lld\n",query(1,1,n,x+1,y+1,0));
    }
    }
}

