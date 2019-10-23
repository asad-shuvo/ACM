#include<bits/stdc++.h>
using namespace std;
#define mx 10000005
#define ll long long int
bool status[mx+1];
long long int prime[mx];
ll arr[mx],k;
ll   tree[mx*4];
void init(ll   node,ll   b,ll   e){
    if(b==e)
    {

        tree[node]=arr[b];
        return;
    }
    ll   Left=node*2;
    ll   Right=node*2+1;
    ll   mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=tree[Left]+tree[Right];
}
ll   query(ll   node,ll   b,ll   e,ll   i,ll   j){
    if(i>e || j<b)
    return 0;
    if(b>=i && e<=j)
        return tree[node];
    ll   Left=node*2;
    ll   Right=node*2+1;
    ll   mid=(b+e)/2;
    ll   p1=query(Left,b,mid,i,j);
    ll   p2=query(Right,mid+1,e,i,j);
    return p1+p2;
}
void update(ll   node,ll   b,ll   e,ll   i,ll   newvalue){
    if(i>e || i<b)
        return;
        if(b>=i && e<=i){
                if(k==2){
                        if(newvalue==1)
            tree[node]=1;
            else
                tree[node]=0;
                }
        else
            tree[node]=0;
            return;
        }
        ll   Left=node*2;
        ll   Right=node*2+1;
        ll   mid=(b+e)/2;
        update(Left,b,mid,i,newvalue);
        update(Right,mid+1,e,i,newvalue);
    tree[node]=tree[Left]+tree[Right];
}

int main()
{
    ll   i,j;
    status[1]=1;
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

    ll   l,m,n,test,te=0;
    //scanf("%lld",&test);
    //while(test--){
           // prll  f("Case %d:\n",++te);
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
        if(status[arr[i]]==0)
            arr[i]=1;
        else
        arr[i]=0;
    }
    init(1,1,n);
    scanf("%lld",&m);
    while(m--){
        scanf("%lld",&k);
        /*
        if(k==1){
            ll   plc;
                scanf("%d",&plc);
        prll  f("%d\n",arr[plc+1]);
        arr[plc+1]=0;
            update(1,1,n,plc+1,0);
        }*/
         if(k==2){
                ll   plc;
                ll   newvalue,money;
            scanf("%lld%lld",&plc,&money);
if(status[money]==0)
    money=1;
else
    money=0;
    arr[plc]=money;
        update(1,1,n,plc,money);
       //  arr[plc]=money;
        }
        else if(k==1){
                ll   x,y;
            scanf("%lld%lld",&x,&y);
        printf("%lld\n",query(1,1,n,x,y));
        }
    }
}


