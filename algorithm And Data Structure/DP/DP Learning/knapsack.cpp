#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005
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
int dp[200][200],CAP,n;
int weight[200],cost[200];
int fun(int i,int w)
{{
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int profit1=0,profit2=0;
    if(CAP>=(w+weight[i]))profit1=cost[i]+fun(i+1,w+weight[i]);
    profit2=fun(i+1,w);
    return dp[i][w]=max(profit1,profit2);
}}
int main()
{
    sc("%d%d",&n,&CAP);
    for(int i=1;i<=n;i++){
        sc("%d%d",&weight[i],&cost[i]);
    }
    memset(dp,-1,sizeof(dp));
    cout<<fun(1,0)<<endl;
}
/*
5 10
1 120
7 400
4 280
3 150
4 200
*/
