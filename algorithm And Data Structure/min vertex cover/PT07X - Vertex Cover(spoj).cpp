#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
#define MAXN 100002
int dp[MAXN][5];
int par[MAXN];
vector<int>edges[MAXN];

int f(int u,int isGuard)
{
	if(edges[u].size()==0)return 0;
	if(dp[u][isGuard]!=-1) return dp[u][isGuard];
	int sum=0;
	for(int i=0;i<(int)edges[u].size();i++)	{
		int v=edges[u][i];
		if(v!=par[u]){
			par[v]=u;
			if(isGuard==0) sum+=f(v,1);
			else sum+=min(f(v,1),f(v,0));
		}
	}
	return dp[u][isGuard]=sum+isGuard;
}

int main()
{
        memset(dp,-1,sizeof(dp));
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	int ans=0;
	ans=min(f(1,1),f(1,0));
	printf("%d\n",ans);
	return 0;
}
