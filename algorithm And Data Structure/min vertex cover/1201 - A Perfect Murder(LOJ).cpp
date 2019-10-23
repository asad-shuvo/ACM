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
int dp[mx][mx];
int par[mx],vis[mx];
vector<int>edges[mx];
int f(int u,int isGuard)
{
    vis[u]=1;
	if(edges[u].size()==0)return 0;
	if(dp[u][isGuard]!=-1) return dp[u][isGuard];
	int sum=0;
	for(int i=0;i<(int)edges[u].size();i++)	{
		int v=edges[u][i];
		vis[v]=1;
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
   //FILE
    int n,m,test,te=0;
    sc1(test);
    while(test--){
    sc2(n,m);
    mem(dp,-1);
    mem(par,0);
    mem(vis,0);
    for(int i=0;i<mx;i++)edges[i].clear();
    while(m--){
        int x,y;
        sc2(x,y);
        edges[x].p_b(y);
        edges[y].p_b(x);
    }

    int M=(min(f(1,1),f(1,0)));
int    sum=0;
    sum+=M;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            M=min(f(i,1),f(i,0));
            sum+=M;
        }
    }
    pr("Case %d: %d\n",++te,n-sum);
}
}

