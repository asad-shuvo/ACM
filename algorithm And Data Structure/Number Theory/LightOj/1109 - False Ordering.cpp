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
#define mx 1005
vector<int>v1;
int status[mx];

void sieve(){
    int  i,j;
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
    for( i=2;i<=mx;i++){
        if(status[i]==0)v1.push_back(i);
    }
}
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
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)
int NOD ( int n ) {
    int res=0;
   for(int i=1;i<=n;i++){
    if(n%i==0)res++;
   }
    return res;
}
int main()
{
    sieve();
    int test,te=0;

    int div[1005];
    int arr[1005],id[1005];
    for(int i=1;i<=1000;i++){
            id[i]=i;
            if(i==1)arr[i]=1;
            else if(status[i]==0)arr[i]=2;
            else{
       int ret=NOD(i);
       arr[i]=ret;
            }
    }
    //cout<<arr[840]<<" "<<arr[360]<<" "<<arr[420]<<" "<<arr[720]<<endl;
     for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
        if((arr[j]==arr[i] and j>i)){
            swap(arr[j],arr[i]);
            swap(id[j],id[i]);
        }
        else if(arr[j]>arr[i]){
            swap(arr[j],arr[i]);
            swap(id[j],id[i]);
        }
    }
    }

    sc1(test);
    while(test--){

    int n;
    sc1(n);
pr("Case %d: %d %d\n",++te,id[n],arr[n]);
}
}
