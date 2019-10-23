#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
ll arr[Mx],n;
struct info{
    ll sum,prop;
}tree[4*Mx];
void update(ll node,ll b,ll e,ll i,ll j,ll x){
        if(i>e || j<b)
            return;
        if(b>=i && e<=j){
            tree[node].sum+=((e-b+1)*x);
            tree[node].prop+=x;
            return ;
        }
ll    Left=2*node;
  ll  Right=2*node+1;
    ll mid=(e+b)/2;
    update(Left,b,mid,i,j,x);
    update(Right,mid+1,e,i,j,x);
    tree[node].sum=tree[Left].sum+tree[Right].sum+(e-b+1)*tree[node].prop;
}
ll query(ll node,ll b,ll e,ll i,ll j,ll carry){
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node].sum+carry*(e-b+1);
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(b+e)/2;
   ll p1= query(Left,b,mid,i,j,carry+tree[node].prop);
    ll p2=query(Right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}
void init(){
    for(int i=0;i<=n*4;i++)
    {
        tree[i].sum=0;
        tree[i].prop=0;
    }
}
int main()
{
    ll q,i ,j,k,l,m,high,low,value,x,test,t=0;
    scanf("%lld",&test);
    while(test--){
            //printf("Case %lld:\n",++t);
    scanf("%lld%lld",&n,&q);
    init();
    while(q--){

        scanf("%lld",&k);
        if(k==0){
            scanf("%lld%lld%lld",&low,&high,&value);
            //low++;
            //high++;
            update(1,1,n,low,high,value);
        }
        else if(k==1){
            scanf("%lld%lld",&low,&high);
            //low++;
            //high++;
            printf("%lld\n",query(1,1,n,low,high,0));
        }
    }
}
return 0;
}
