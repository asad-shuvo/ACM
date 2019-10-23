#include <bits/stdc++.h>
using namespace std;
#define  MX 100005
#define ll long long int
ll n;
struct info{
    ll sum,prop;
}tree[MX*4];
void init(){
    for(int i=0;i<=n*4;i++){
        tree[i].sum=0;
        tree[i].prop=0;
    }
}
void update(ll node,ll b,ll e,ll i,ll j,ll x){
    if(i>e || j<b)
        return;
    if(b>=i && e<=j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        return;
    }
    ll l=node*2;
    ll r=node*2+1;
    ll mid=(b+e)/2;
    update(l,b,mid,i,j,x);
    update(r,mid+1,e,i,j,x);
    tree[node].sum=tree[l].sum+tree[r].sum+(e-b+1)*tree[node].prop;
}
ll query(ll node,ll b,ll e,ll i,ll j,ll carry){
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
    {

        return tree[node].sum+carry*(e-b+1);
    }
    ll l=node*2;
    ll r=node*2+1;
    ll mid=(e+b)/2;
    ll p1=query(l,b,mid,i,j,carry+tree[node].prop);
    ll p2=query(r,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}
int main()
{

    ll m,i,j,k,q,l,h,v,test,t=0;
    scanf("%lld",&test);
    while(test--){
            printf("Case %lld:\n",++t);
    scanf("%lld%lld",&n,&q);
    init();
    while(q--){
        scanf("%lld",&k);
        if(k==0){
            scanf("%lld%lld%lld",&l,&h,&v);
            l++;
            h++;
            update(1,1,n,l,h,v);
        }
        else if(k==1){
            scanf("%lld%lld",&l,&h);
            l++;
            h++;
            printf("%lld\n",query(1,1,n,l,h,0));
        }
    }
}
return 0;
}
