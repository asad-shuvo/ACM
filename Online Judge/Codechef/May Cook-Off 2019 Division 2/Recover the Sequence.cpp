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
int main()
{
    int test;
    sc1(test);
    while(test--)
    {
        int n;
        sc1(n);
        int arr[n+1];
        vector<int>v,v1,v2,v3,v4;
        for(int i=0; i<n; i++)
        {
            sc1(arr[i]);
            v.p_b(arr[i]);
        }
        int d1=arr[1]-arr[0];
        int d2=arr[2]-arr[1];
        int d3=arr[3]-arr[2];
        int f=0;
        int cnt=0;
        int ang=d1;
        v1=v;
        int tmp1=v1[2]-v1[1];
        if(tmp1!=d1)
        {
            cnt++;
            v1[2]=v1[1]+d1;
        }
        int tmp2=v1[3]-v1[2];
        if(tmp2!=d1)
        {
            cnt++;
            v1[3]=v1[2]+d1;
        }
        if(cnt>1)f=1;
        if(f==1)
        {
            v2=v;
            ang=d2;
            f=0;
            cnt=0;
            int t1=v2[1]-v2[0];
            if(t1!=d2)
            {
                v2[0]=(v2[1]-d2);
                cnt++;
            }
            t1=v2[3]-v2[2];
            if(t1!=d2)
            {
                cnt++;
                v2[3]=v2[2]+d2;
            }
        }
        if(cnt>1)f=1;
        if(f==1)
        {
            v3=v;
            ang=d3;
            f=0;
            cnt=0;
            int t1=v3[2]-v3[1];
            if(t1!=d3)
            {
                v3[1]=(v3[2]-d3);
                cnt++;
            }
            t1=v3[1]-v3[0];
            if(t1!=d3)
            {
                cnt++;
                v3[0]=v3[1]-d3;
            }
        }
        if(ang==d1){
            v4=v1;
        }
        else if(ang==d2)v4=v2;
        else if(ang==d3)v4=v3;

        for(int i=1;i<n;i++){
            if(v4[i]-v4[i-1]!=ang){
                v4[i]=v4[i-1]+ang;
            }
        }
        for(int i=0;i<n;i++){
            pr("%d ",v4[i]);
        }
        /*int d22=0;
          int cnt=0;

        for(int i=1;i<n;i++){
                cnt++;
        if(cnt>=3){
            arr[i]=arr[i-1]+d22;
            continue;
        }
            int d=arr[i]-arr[i-1];
            int d1=arr[i+1]-arr[i];
            if(d1!=d){
        int                t1=arr[i]+d;
        int            det1=arr[i+2]-t1;

        int                t2=arr[i]-d1;
        int            det2=arr[i+2]-t2;

                if(det1==d){
                    arr[i+1]=arr[i]+d;
                }
                else if(det2==d1){
                    arr[i-1]=arr[i]-d1;
                }
            }
        d22=arr[i]-arr[i-1];
        }*/
       /* pr("%d",arr[0]);
        for(int i=1; i<n; i++)
        {
            pr(" %d",arr[i]);
        }*/
        pr("\n");
    }
}

