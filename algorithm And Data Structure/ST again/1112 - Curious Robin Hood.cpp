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
int segTree[Mx*4+5];
int inparr[Mx+5];
void init(int low,int hi,int nod)
{
    if(low==hi)
    {
        segTree[nod]=inparr[low];
        return;
    }
    int mid=(low+hi)/2;
    init(low,mid,2*nod+1);
    init(mid+1,hi,2*nod+2);
    segTree[nod]=segTree[2*nod+1]+segTree[2*nod+2];

}

void update(int low,int hi,int nod,int val,int pos)
{
    if(pos>hi or pos<low)return;
    if(pos<=low and pos>=hi)
    {
        if(val==0)
        {
            segTree[nod]=0;
        }
        else segTree[nod]=segTree[nod]+val;
        return;
    }
    int mid=(low+hi)/2;
    update(low,mid,2*nod+1,val,pos);
    update(mid+1,hi,2*nod+2,val,pos);
    segTree[nod]=segTree[2*nod+1]+segTree[2*nod+2];
}
int query(int low,int hi,int nod,int i,int j)
{
    if(i>hi or j<low)return 0;
    if(i<=low and j>=hi)
    {
        return segTree[nod];
    }
int    mid=(low+hi)/2;
    int ret1=query(low,mid,nod*2+1,i,j);
    int ret2=query(mid+1,hi,nod*2+2,i,j);
    return (ret1+ret2);

}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--)
    {
        int n,m;
        sc2(n,m);
        fori(n)sc1(inparr[i]);
        init(0,n-1,0);
pr("Case %d:\n",++te);
        while(m--)
        {
            int tsk;
            sc1(tsk);
            if(tsk==1)
            {
                int pos;
                sc1(pos);
                pr("%d\n",inparr[pos]);
                inparr[pos]=0;
                update(0,n-1,0,0,pos);
            }
            else if(tsk==2){
                int pos;
                int val;
                sc2(pos,val);
                inparr[pos]+=val;
                update(0,n-1,0,val,pos);
            }
            else if(tsk==3){
                int i,j;
                sc2(i,j);
                int ret=query(0,n-1,0,i,j);
                pr("%d\n",ret);
            }
        }
    }
}


