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
#define Mx 210000
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
ll tree[Mx*4+5];
ll arr[Mx+5];
ll lazy[Mx*4+5];
void init(ll node,ll b,ll  e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    ll  mid=(b+e)/2;
    ll  n=node*2;
    init(n,b,mid);
    init(n+1,mid+1,e);
    tree[node]=min(tree[n],tree[n+1]);
}
void update(ll  node,ll  b,ll  e,ll  i,ll  j,ll val)
{
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(b!=e)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(i>e or j<b)return;
    if(b>=i and e<=j){
        tree[node]+=val;
        if(b!=e){
            lazy[node*2]+=val;
            lazy[node*2+1]+=val;
        }
        return;
    }
    ll  mid=(b+e)/2;
    update(node*2,b,mid,i,j,val);
    update(node*2+1,mid+1,e,i,j,val);
    tree[node]=min(tree[node*2],tree[node*2+1]);
}

ll query(ll  node,ll  b,ll  e,ll  i,ll  j)
{
    //cout<<"1"<<endl;
    if(lazy[node]!=0){
        tree[node]+=lazy[node];
        if(b!=e){
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
     if(i>e ||j<b)
        return 999999999999999999;
    if(b>=i && e<=j)
        return tree[node];
    ll  mid=(b+e)/2;
    return min(query(node*2,b,mid,i,j),query(node*2+1,mid+1,e,i,j));
}
int main()
{
//__FastIO;
        ll n;
        scL1(n);
        for(ll  i=1;i<=n;i++)sc("%lld",&arr[i]);
        init(1,1,n);
        int q;
        sc1(q);
getchar();
        while(q--)
        {

            string a;
            getline(cin,a);
            vector<ll>v;
            v.clear();
            stringstream ss(a);
            ll  b;
            while(ss>>b)
            {
                v.p_b(b);
            }
 //cout<<v.size()<<endl;
            ll i=v[0];
            ll j=v[1];
            i++;
            j++;

            if(v.size()==2)
            {
                ll ret;
                if(j<i){
                 ret=query(1,1,n,i,n);
                //cout<<ret<<endl;
                ll ret2=query(1,1,n,1,j);
               // cout<<ret2<<endl;
                ret=min(ret,ret2);
                }
                else{
                     ret=query(1,1,n,i,j);
                }
                cout<<ret<<endl;
               // pr("%lld\n",ret);
                //pr("%lld\n",ret);
            }
            else
            {
                ll val=v[2];
                 if(j<i){
                update(1,1,n,i,n,val);
                update(1,1,n,1,j,val);
                //ret=min(ret,ret2);
                }
                else{
                    update(1,1,n,i,j,val);
                }
            }

        }
    }



