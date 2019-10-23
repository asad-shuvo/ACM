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
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
#define Mx 100005
#define mx 10005
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)
int main()
{
    int arr[5*10005];
    int n;
    sc1(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sc1(arr[i]);
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int sm=arr[0];
    int mn=INT_MAX,plc,f=0,val,mn2=INT_MAX;
    for(int i=n-1; i>=0; i--)
    {

        int tmp=arr[i];
        int sq=sqrt(tmp);
        for(int j=2; j<=(tmp/2); j++)
        {
            if(tmp%j==0)
            {

                int z=j;
                int t=(sm*z);
                int ttt=(sum-sm);
                ttt+=t;
                int kk=tmp/z;
                ttt-=(tmp-(kk));
                if(ttt<sum and ttt<mn2)
                {
                    f=1;
                    mn=t;
                    plc=i;
                    val=(tmp/z);
                    mn2=ttt;
                }

            }
        }

    }
    int cnt=0;
    if(f==1)
    {
        arr[0]=mn;
        arr[plc]=val;
        for(int i=0; i<n; i++)
        {
            cnt+=arr[i];
         }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cnt+=arr[i];
        }
    }
    pr("%d\n",cnt);
}
