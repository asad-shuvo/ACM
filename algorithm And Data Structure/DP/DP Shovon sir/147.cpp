#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[12][100005];
ll coin[]={10000,5000,2000,1000,500,200,100,50,20,10,5};
ll make;

ll func(ll i, ll amount)
{
    if(i>=11){
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
    double make1;
    while(scanf("%lf",&make1) && make1!=0.00){
            make=make1*100;
        printf("%lld\n",func(0,make));
    }
}

