#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
#define Mx 100005
#define mx 1005
int dp[mx][mx];
int par[mx];
vector<int>edges[mx];
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
    int n;
    while(sc("%d",&n)&& n>0){
    mem(dp,-1);
    mem(par,0);
    for(int i=0;i<mx;i++)
        edges[i].clear();

    //sc1(n);
    for(int i=1;i<=n;i++){
    int a;
    sc("%d",&a);
    for(int j=1;j<=a;j++){
        int x;
        sc("%d",&x);
    edges[i].p_b(x);
        //edges[x].p_b(i);
    }
    }
    if(n==1)pr("1\n");
    else
    pr("%d\n",min(f(1,1),f(1,0)));
    }
}

