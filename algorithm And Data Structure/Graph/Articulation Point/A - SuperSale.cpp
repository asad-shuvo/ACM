#include <bits/stdc++.h>
using namespace std;
#define Max_N 1005
#define Max_w 1005
int dp[Max_N][100];
int cost[Max_N];
int weight[Max_N];
int cap;
int n;
int func(int i,int w,int c)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=c) profit1=cost[i]+func(i+1,w+weight[i],c);

    profit2=func(i+1,w,c);

    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&cost[i],&weight[i]);

        int G,sum=0;
        scanf("%d",&G);
        while(G--){
                memset(dp, -1 ,sizeof(dp));
                scanf("%d",&cap);
            sum+=func(1,0,cap);
        }
        printf("%d\n",sum);
}
}

