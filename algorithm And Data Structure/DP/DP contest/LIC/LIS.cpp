#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int n,value[mx];
int dp[mx],dir[mx];
int longest(int u)
{
    if(dp[u]!=-1) return dp[u];
    int maxi=0;
    for(int v=u+1;v<=n;v++){
        if(value[v]>value[u])
        {
            if(longest(v)>=maxi){maxi=longest(v);
            dir[u]=v;}}}
            dp[u]=1+maxi;
            return dp[u];
        }
void solution(int start)
{
	while(start!=-1)
	{
		printf("index %d value %d\n",start,value[start]);
		start=dir[start];
	}
}
int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dir,-1,sizeof(dir));
    int LIS=0,start;
    sc("%d",&n);
    for(int i=1;i<=n;i++)sc("%d",&value[i]);
    for(int i=1;i<=n;i++)
    {
      //  cout<<longest(i)<<endl;
        if(longest(i)>LIS){
            LIS=longest(i);
            start=i;
        }
    }
    pr("LIS = %d Starting point %d\n",LIS,start);
    solution(start);
}

