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
#define mx 1000
int n=7;
int value[]={-100000,5,0,9,2,7,3,4};
int dp[mx],dir[mx];
void solution(int start)
{
	while(dir[start]!=-1)
	{
		printf("index %d value %d\n",start,value[start]);
		start=dir[start];
	}
}
int longest(int u)
{
	if(dp[u]!=-1) return dp[u];
	int maxi=0;
	for(int v=u+1;v<=n;v++) //১ম শর্ত,v>u
	{
		if(value[v]>value[u]) //২য় শর্ত, value[v]>value[u]
		{
			if(longest(v)>maxi) //সর্বোচ্চ মানটা নিবো
			{
				maxi=longest(v);
                                dir[u]=v;

			}
		}
	}
	dp[u]=1+maxi; //১ যোগ হবে কারণ u নম্বর নোডটাও পাথের মধ্যে আছে
	return dp[u];
}
int main()
{
//	READ("in");
	memset(dp,-1,sizeof dp);
        memset(dir,-1,sizeof dir);
	int LIS=0,start;
	for(int i=1;i<=n;i++)
	{
		printf("longest path from: %d\n",longest(i));
		if(longest(i)>LIS)
		{
			LIS=longest(i);
			start=i;
		}
	}
	printf("LIS = %d Starting point %d\n",LIS,start);
solution(start);
	return 0;
}

