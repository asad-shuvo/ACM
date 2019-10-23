#include<bits/stdc++.h>
using namespace std;
int dp[100][1000];
int weight[100];
int cost[100],n,cap;
int func(int i,int w){
    if(i==n+1) return 0;
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
   for(int i=1;i<=n;i++)
   {
       scanf("%d%d",&weight[i],&cost[i]);
   }
   printf("%d\n",func(1,0));

}
/**
5 10
1 120
7 400
4 280
3 150
4 200

output-600
*/
