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
int arr[2*Mx];
bool bl[2*Mx];
int a[2*Mx];
int main()
{
    int n;
    sc1(n);
    int v1[2*Mx],v2[2*Mx];
    for(int i=1; i<=2*n; i++)
    {
        sc1(arr[i]);
        a[arr[i]]++;
        if(a[arr[i]]==1)
        {
            v1[arr[i]]=i;
        }
        else v2[arr[i]]=i;
    }

    int cnt=1;
    int plc1=1,plc2=1;
    ll dis=0;
    for(int i=1; i<=n; i++)
    {
        int m1=abs(plc1-v1[i]);
        int m2=abs(plc2-v2[i]);
        int m3=m1+m2;
        int m4=abs(plc1-v2[i]);
        int m5=abs(plc2-v1[i]);
        int m6=m4+m5;
        if(m3<=m6){
            plc1=v1[i];
            plc2=v2[i];
            dis+=m3;
        }
        else{
            plc1=v2[i];
            plc2=v1[i];
            dis+=m6;
        }
    }
            cout<<dis<<endl;
}
