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
#define sqr(x)           (x)*(x)
#define TEST int test,te=0
#define segment_tree int l=(n*2),r=(n*2)+1,mid=(l+r)/2
#define Mx 100005
#define mx 10005
#define __FastIO        ios_base::sync_with_stdio(false); cin.tie(0)
struct data{
int cone,czero;
};
data tree[4*1024004];
int arr[1024004];
int lazy[4*1024004];
void init(int node,int b,int e)
{
    if(b==e){
            if(arr[b]==1){
        tree[node].cone=1;
        tree[node].czero=0;
            }
            else{
                 tree[node].cone=0;
        tree[node].czero=1;
            }
            return;
    }
    int mid=(b+e)/2;
    init(node*2,b,mid);
    init(node*2+1,mid+1,e);
    tree[node].cone=tree[node*2].cone+tree[node*2+1].cone;
    tree[node].czero=tree[node*2].czero+tree[node*2+1].czero;

}
void update(int n,int b,int e,int i,int j,int v)
{
    if(lazy[n]!=-1)
    {
        int vl=lazy[n];
        if(vl==1){
            tree[n].cone=(e-b+1);
            tree[n].czero=0;
        }
        else if(vl==0){
            tree[n].czero=(e-b+1);
            tree[n].cone=0;
        }
        else if(vl==2){
            int t1=tree[n].cone;
            int t2=tree[n].czero;
            tree[n].cone=t2;
            tree[n].czero=t1;
        }
        if(b!=e)
        {
            lazy[n*2]=vl;
            lazy[n*2+1]=vl;
        }
        lazy[n]=-1;
    }
    if(i>e or j<b)
        return;
    if(b>=i and e<=j)
    {
        if(v==1){
            tree[n].cone=(e-b+1);
            tree[n].czero=0;
        }
        else if(v==0){
            tree[n].czero=(e-b+1);
            tree[n].cone=0;
        }
        else if(v==2){
            int t1=tree[n].cone;
            int t2=tree[n].czero;
            tree[n].cone=t2;
            tree[n].czero=t1;
        }
        if(b!=e)
        {
            lazy[n*2]=v;
            lazy[n*2+1]=v;
        }
        return;
    }
    int   mid=(b+e)/2;
    update(n*2,b,mid,i,j,v);
    update(n*2+1,mid+1,e,i,j,v);
    tree[n].cone=tree[n*2].cone+tree[n*2+1].cone;
    tree[n].czero=tree[n*2].czero+tree[n*2+1].czero;
}
int  query(int  n,int  b,int  e,int  i,int  j)
{

    if(lazy[n]!=-1)
    {
        int v=lazy[n];
        if(v==1){
            tree[n].cone=(e-b+1);
            tree[n].czero=0;
        }
        else if(v==0){
            tree[n].czero=(e-b+1);
            tree[n].cone=0;
        }
        else if(v==2){
            int t1=tree[n].cone;
            int t2=tree[n].czero;
            tree[n].cone=t2;
            tree[n].czero=t1;
        }
        if(b!=e)
        {
            lazy[n*2]=v;
            lazy[n*2+1]=v;
        }
        lazy[n]=-1;
    }
    if(i>e ||j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[n].cone;
    int   mid=(b+e)/2;
    return query(n*2,b,mid,i,j)+query(n*2+1,mid+1,e,i,j);
}
int main()
{
    int test;
    sc1(test);
    while(test--){
            mem(lazy,-1);
        string str="";
        int t;
        sc1(t);
        while(t--){
            int sz;
            sc1(sz);
            string s;
                cin>>s;
            while(sz--){

                str+=s;

            }
            //cout<<str<<endl;
        }
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                arr[i+1]=1;
            }
            else arr[i+1]=0;
        }
        init(1,1,n);
        int q;
        sc1(q);

        while(q--){
            char ch;
            getchar();
            sc("%c",&ch);

            int i,j;
            sc2(i,j);
            i++;
            j++;
            if(ch=='F'){
                update(1,1,n,i,j,1);
            }
            if(ch=='E')
            {
                update(1,1,n,i,j,0);
            }
            if(ch=='I'){
                update(1,1,n,i,j,2);
            }
            if(ch=='S'){
                pr("%d\n",query(1,1,n,i,j));
            }

        }
    }
}


