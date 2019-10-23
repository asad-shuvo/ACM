#include<bits/stdc++.h>
using namespace std;
#define Max_N 1001
#define Max_W 1001
int dp1[Max_N][Max_W];
int dp2[Max_N][Max_W];
int weight[Max_N];
int cost[Max_N],n,cap;
int func(int i,int w){
    if(i==n+1) return 0;  ///thats means item is finished and there is no item so no weight
    if(dp1[i][w]!=-1)
        return dp1[i][w];

        int profit1=0,profit2=0;
    if(w+weight[i]<=cap){
        profit1=weight[i]+func(i+2,w+weight[i]);
    }
        profit2=func(i+2,w);

        dp1[i][w]=max(profit1,profit2);
        return dp1[i][w];
}
int func2(int i,int w){
    if(i==n+1) return 0;  ///thats means item is finished and there is no item so no weight
    if(dp2[i][w]!=-1)
        return dp2[i][w];

        int profit1=0,profit2=0;
    if(w+weight[i]<=cap){
        profit1=weight[i]+func2(i+2,w+weight[i]);
    }
        profit2=func2(i+2,w);

        dp2[i][w]=max(profit1,profit2);
        return dp2[i][w];
}
int main()
{
    int test,m=0;
    scanf("%d",&test);
    while(test--){
   scanf("%d%d",&n,&cap);
   memset(dp1, -1 ,sizeof(dp1));
   memset(dp2, -1 ,sizeof(dp2));
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&weight[i]);
   }
   int i1=func(1,0);
   int i2=func2(2,0);
   printf("Scenario #%d: %d\n",++m,max(i1,i2));/// start with first item and initially weight is zero
    }
}
