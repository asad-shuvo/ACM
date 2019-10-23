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
int dp[150],dir[150],dps[150];
vector<int>G[150];
int endpoint,ta=0;
/*
void solution(int start)
{
	while(dir[start]!=-1)
	{
		printf("index %d value %d\n",start,dir[start]);
		start=dir[start];
	}
}*/
int longest(int u)
{
    ta++;
    int maxi=0,i;
    if(dp[u]!=-1)return dp[u];
    for( i=0;i<G[u].size();i++){
        if(longest(G[u][i])>maxi){
            maxi=longest(G[u][i]);
               //         endpoint=G[u][i];
dir[u]=G[u][i];
        }
    }
    return dp[u]=maxi+1;
    if()
     dps[u]=G[u][i-1];
}
int main()
{
    mem(dp,-1);
    mem(dir,-1);
    int i,n,startpoint;
    sc2(n,startpoint);
while(1){
        int m1,m2;
        sc2(m1,m2);
        if(m1==0 && m2==0)break;
        G[m1].p_b(m2);
    }
    cout<<longest(startpoint)-1<<" "<<endpoint<<endl;
for(int i=1;i<=n;i++)cout<<dps[i]<<endl;
    //solution(startpoint);
}

