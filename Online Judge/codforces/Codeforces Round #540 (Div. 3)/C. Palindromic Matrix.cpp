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
    int a[15]={0},b[15]={0},c[15]={0};
    int mat[22][22];
    mem(mat,0);
    //int cnt=0;
    int n,kp;
    sc1(n);
    int nd=(n-2);
    nd*=2;
    int arr[1000];
    for(int i=0;i<n*n;i++){
        sc1(arr[i]);
        a[arr[i]]++;
        b[arr[i]]++;
        c[arr[i]]++;
    }
    int c1=0,cnt=0;
    for(int i=1;i<=10;i++){
        if(b[i]>=4 and c1==0){
            c1=i;
            b[i]-=4;
        }
        int tmp=b[i]/2;
        cnt+=tmp;
    }
    if(c1>0 and (cnt>=nd)){
       mat[1][1]=c1;
       mat[n][n]=c1;
       mat[1][n]=c1;
       mat[n][1]=c1;
       c[c1]-=4;
       for(int i=2;i<=n-1;i++){
        for(int j=1;j<=10;j++){
            if(c[j]>=2){
                mat[1][i]=j;
                mat[n][i]=j;
                c[j]-=2;
                break;
            }
        }
       }
       for(int i=2;i<=n-1;i++){
        for(int j=1;j<=10;j++){
            if(c[j]>=2){
                mat[i][1]=j;
                mat[i][n]=j;
                c[j]-=2;
                break;
            }
        }
       }
       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
       }
       }
       else
        pr("NO\n");

   // cout<<cnt<<endl;
}

