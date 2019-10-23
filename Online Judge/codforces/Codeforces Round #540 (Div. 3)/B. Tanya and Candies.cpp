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
int arr[2*100005],sumo[2*100005],sume[2*100005];
int main()
{
    int n;

    sc1(n);
    int s1=0,s2=0;
    for(int i=0; i<n; i++)
    {
        sc1(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0 and i!=0)
        {
            sume[i]+=(arr[i]+sume[i-2]);
            s2+=arr[i];
        }
        if(i==0)
        {
            sume[i]=arr[i];
            s2+=arr[i];
        }
        if(i%2==1)
        {
            s1+=arr[i];
            if(i==1)
            {
                sumo[i]=arr[i];
            }
            else sumo[i]+=(sumo[i-2]+arr[i]);
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        int t1=s1,t2=s2;
        int tmp=arr[i];
        if(i==0)
        {

            t2-=arr[i];
            if(t1==t2)cnt++;
        }
        else if(i==1)
        {
            t1-=arr[i];
            t2-=arr[0];
            t1+=arr[0];
            if(t1==t2)cnt++;
        }
        else
        {
            if(i%2==0)
            {
                t2-=(sume[i]);
                t2+=(sumo[i-1]);
                t1-=sumo[i-1];
                t1+=sume[i-2];
            }
            if(i%2!=0)
            {
                t1-=(sumo[i]);
                t1+=(sume[i-1]);
                t2-=sume[i-1];
                t2+=sumo[i-2];
            }
            if(t1==t2)cnt++;
        }
    }
    pr("%d\n",cnt);

}
