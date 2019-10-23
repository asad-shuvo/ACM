#include <bits/stdc++.h>
using namespace std;
#define d int
#define M 100
#define N 1000
d dp[M][N];
d cost[M];
d weight[M];
d n,cap;
d func(d i,d w ){
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
    scanf("%d%d",&n,&cap);
     memset(dp, -1 ,sizeof(dp));
    for(int i=1;i<=n;i++){
        scanf("%d%d",&weight[i],&cost[i]);
    }

    printf("%d\n",func(1,0));
}
