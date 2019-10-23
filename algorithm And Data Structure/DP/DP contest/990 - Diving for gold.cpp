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
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int dp[mx][mx];
int cap,weight[mx],cost[mx],ro,n;
int func(int i,int w){
    if(i==n+1)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
        int profit1=0,profit2=0;int wfd=(weight[i]*ro)+(2*weight[i]*ro);
    if(w+wfd<=cap){
        profit1=cost[i]+func(i+1,w+wfd);
    }
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
void printpath(int i,int w)
{
    int wfd=(weight[i]*ro)+(2*weight[i]*ro);
    if(dp[i+1][w]>dp[])
}
int main()
{
    int i,j,k,l,m;
    sc("%d%d",&cap,&ro);
    sc("%d",&n);
    for(i=1;i<=n;i++)
    sc("%d%d",&weight[i],&cost[i]);
    memset(dp,-1,sizeof(dp));
    cout<<func(1,0)<<endl;
    printpath(1,0);
}

