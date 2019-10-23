#include <bits/stdc++.h>
using namespace std;
#define Max_N 52
#define Max_W 1002
int dp[Max_N][Max_W];
int cost[Max_W];
int weight[Max_W];
int cap,n;
int func(int i,int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) dp[i][w];

    int profit1=0,profit2=0;

    if(w+weight[i]<=cap)
        profit1=cost[i]+func(i+1,w+weight[i]);
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&cap,&n);
    for(int i=1;i<52;i++)
    {
        for(int j=1;j<1002;j++)
        {
            dp[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++){
        scanf("%d%d",&weight[i],&cost[i]);
    }
    printf("Hey stupid robber, you can get %d.\n",func(1,0));
}
}
