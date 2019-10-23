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
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
#define Mx 100005
#define mx 10005
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)
int fact(int n,int m)
{
    ///Frequency of 2 or 5 in factorial !
    int cnt=0;
    while(n/m){
        cnt+=(n/m);
        n/=m;
    }
    return cnt;
}
int jfct(int n,int m)
{
    ///Number of 2 or 5 in a number divison
    int cnt=0;
    while(n%m==0){
        cnt++;
        n/=m;
    }
    return cnt;
}
int main()
{
    int test;
    sc1(test);
    int te=0;
    while(test--){
        int n,r,p,q;
        sc3(n,r,p);
        sc1(q);
        int a1=fact(n,2);
        int a2=fact(r,2);
        int a3=fact(n-r,2);
        int b1=fact(n,5);
        int b2=fact(r,5);
        int b3=fact(n-r,5);

        int g1=jfct(p,2)*q;
        int g2=jfct(p,5)*q;

        int a=a1-(a2+a3);
        int b=b1-(b2+b3);
        int z=a+g1;
        int g=b+g2;
        int ret=min(z,g);
        pr("Case %d: %d\n",++te,ret);

    }
}

