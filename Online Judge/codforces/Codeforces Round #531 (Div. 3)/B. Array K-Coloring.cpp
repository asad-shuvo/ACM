#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define llu unsigned long long
#define Mx 100005
#define mx 1005
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
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
int main()
{
    int n,k;
    int arr[5005],vis[5005],col[5005];
    sc2(n,k);
    for(int i=1;i<=5000;i++)
        vis[i]=k;
      //  cout<<vis[2]<< " "<<vis[3]<<endl;
    for(int i=1;i<=n;i++)sc1(arr[i]);
    int f=0;
    for(int i=1;i<=n;i++){
            //cout<<vis[arr[i]]<<endl;
        if(vis[arr[i]]==0){
            f=1;
            break;
        }
        if(vis[arr[i]]>0){
            col[i]=vis[arr[i]];
            vis[arr[i]]--;
        }
    }
    if(f==1)pr("NO\n");
    else{
            pr("YES\n");
            int t=0;
int            arr2[5005]={0};
            for(int i=1;i<=n;i++){
                if(arr2[col[i]]==0){
                    arr2[col[i]]++;
                }
            }
            for(int i=1;i<=k;i++){
                if(arr2[i]==0){
                    col[i]=i;
                }
            }
    for(int i=1;i<=n;i++)
        pr("%d ",col[i]);
}
}

