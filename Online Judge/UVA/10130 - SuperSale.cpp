#include <bits/stdc++.h>
using namespace std;
#define M 100000
int dp[1000][100];
int cap,n,g,cost[M],weight[M];
int func(int i,int w){
    if(i==n+1)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
        int profit1=0,profit2=0;
    if(w+weight[i]<=cap){
        profit1=cost[i]+func(i+1,w+weight[i]);
    }
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int i,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&cost[i],&weight[i]);
    }
    int sum=0;
    scanf("%d",&g);
    for(i=1;i<=g;i++){
            memset(dp, -1 ,sizeof(dp));
        scanf("%d",&cap);
    sum+=func(1,0);
        //printf("%d\n",func(1,0));
    }
    printf("%d\n",sum);
    }
}
