#include <bits/stdc++.h>
using namespace std;
int dp[6][100005];
int coin[]={1,5,10,25,50};
int make;

int func(int i, int amount)
{
    if(i>=5){
        if(amount==0) return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0) ret1 = func(i,amount-coin[i]);

    ret2=func(i+1,amount);

    dp[i][amount]=ret1+ret2;

    return dp[i][amount];
}
int main()
{
    memset(dp, -1 ,sizeof(dp));
    while(cin>>make){
        printf("%d\n",func(0,make));
    }
}
