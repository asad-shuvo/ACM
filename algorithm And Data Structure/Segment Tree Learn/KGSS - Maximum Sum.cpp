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
struct Tree{
ll mx1,mx2;
}tree[Mx*4],ans;
ll  arr[Mx];
void init(ll  node,ll  b,ll  e)
{
    if(b==e){
        tree[node].mx1=arr[b];
        tree[node].mx2=0;
        return;
    }
    ll  left=node*2;
    ll  right=node*2+1;
    ll  mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    if(tree[left].mx1>=tree[right].mx1){
        tree[node].mx1=tree[left].mx1;
        tree[node].mx2=max(tree[left].mx2,tree[right].mx1);
    }
    else{
        tree[node].mx1=tree[right].mx1;
        tree[node].mx2=max(tree[right].mx2,tree[left].mx1);
    }
}
void update(ll  node,ll  b,ll  e,ll  i,ll  val)
{
    if(i>e || i<b)return;
    if(b==i && e==i)
    {
        tree[node].mx1=val;
        tree[node].mx2=0;
        return;
    }
     ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,val);
    update(right,mid+1,e,i,val);
    if(tree[left].mx1>=tree[right].mx1){
        tree[node].mx1=tree[left].mx1;
        tree[node].mx2=max(tree[left].mx2,tree[right].mx1);
    }
    else{
        tree[node].mx1=tree[right].mx1;
        tree[node].mx2=max(tree[right].mx2,tree[left].mx1);
    }
}
void query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)return;
    if(b>=i && e<=j){
     //       cout<<tree[node].mx1<<" "<<tree[node].mx2<<" "<<ans.mx1<<" "<<ans.mx2<<endl;
        if(tree[node].mx1>=ans.mx1){
            swap(ans.mx1,ans.mx2);
            ans.mx1=tree[node].mx1;
            ans.mx2=max(ans.mx2,tree[node].mx2);
        }
        else{
            ans.mx2=max(ans.mx2,tree[node].mx1);
        }
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    query(left,b,mid,i,j);
    query(right,mid+1,e,i,j);
}
int main()
{
    ll n,i;
    sc("%lld",&n);
    F(i,1,n)sc("%lld",&arr[i]);
    ll q;
    sc("%lld",&q);
    init(1,1,n);
    while(q--){
        getchar();
        char ch;
        sc("%c",&ch);
        if(ch=='U'){
            ll x,val;
            sc("%lld%lld",&x,&val);
            update(1,1,n,x,val);
        }
        else{
            ll x,y;
            sc("%lld%lld",&x,&y);
            ans.mx1=0;
            ans.mx2=0;
            query(1,1,n,x,y);
            pr("%lld\n",ans.mx1+ans.mx2);
        }
    }
}

