#include <bits/stdc++.h>
using namespace std;
#define M 1000;
long long int dp[6][100];
long long int money[]={1,5,10,25,50};
long long int make;
long long int func(long long int i,long long int amount){
    if(i>=5){
        if(amount==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    int p1=0,p2=0;
    if(amount-money[i]>=0){
        p1=func(i,amount-money[i]);
    }
    p2=func(i+1,amount);
    return dp[i][amount]=p1+p2;
    //return dp[i][amount];
}
int main()
{
     memset(dp , -1 ,sizeof(dp));
    while(scanf("%lld",&make)!=EOF){
  //  memset(dp , -1 ,sizeof(dp));
    printf("%lld\n",func(0,make));
    }
}
