#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100
#define MAX_W 1000
int n;
int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int cost[MAX_N+1];
int CAP,mx=-1000;
int func(int i,int w)
{
if(i==n || w>CAP) return 0; //সব কিছু নেয়া হয়ে গেছে
if(dp[i][w]!=-1) return dp[i][w]; //এই স্টেটটা আগেই হিসাব করে এসেছি
int profit1=0,profit2=0;
if(cost[i]<0){
profit1=func(i+1,w++);
}
else
    profit2=cost[i]+func(i+1,w);

    dp[i][w]=max(profit1,profit2); //বেশি লাভ যেটায় হবে সেটাই আমরা নিবো
return dp[i][w];


}//যদি i তম জিনিসটা নেয়া যায় তাহলে লাভের পরিমাণ profit1
//profit1=cost[i]+func(i+1,w);
 //যদি জিনিসটা না নেই তাহলে লাভ profit2
int main()
{
memset(dp,-1,sizeof(dp));
scanf("%d%d",&n,&CAP);
for(int i=0;i<n;i++)
{
scanf("%d\n",&cost[i]);
}
printf("%d\n",func(0,0));
}
