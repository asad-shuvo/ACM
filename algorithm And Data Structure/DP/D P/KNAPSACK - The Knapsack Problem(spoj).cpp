#include<bits/stdc++.h>
using namespace std;
#define Max_N 2000
#define Max_W 2000
int dp[Max_N][Max_W];
int weight[Max_N];
int cost[Max_N],n,cap;
int func(int i,int w){
    if(i==n+1) return 0;  ///thats means item is finished and there is no item so no weight
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
   scanf("%d%d",&cap,&n);
   memset(dp, -1 ,sizeof(dp));
   for(int i=1;i<=n;i++)
   {
       scanf("%d%d",&weight[i],&cost[i]);
   }
   printf("%d\n",func(1,0));/// start with first item and initially weight is zero

}

