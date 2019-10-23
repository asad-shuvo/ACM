#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
ll dp[22][1000005];

ll coin[21]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
ll func(ll i,ll amount){
    if(i>=21){
        if(amount==0) return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll ret1=0,ret2=0;
    if(amount-coin[i]>=0) ret1=func(i,amount-coin[i]);
    ret2=func(i+1,amount);
    dp[i][amount]=ret1+ret2;
    return dp[i][amount];
}
int main()

{
    memset(dp,-1,sizeof(dp));
    ll   make;
    while(sc("%lld",&make)!=EOF){
        pr("%lld\n",func(0,make));
    }

}
