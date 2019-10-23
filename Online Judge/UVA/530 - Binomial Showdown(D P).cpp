#include <bits/stdc++.h>
using namespace std;
long long int dp[200][200];
#define  ll unsigned long long
ll ncr(ll n,ll r){
    if(r==1)
        return n;
     if(n==r)
        return 1;
    if(dp[n][r]!=0)
        return dp[n][r];
    else{
         dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
         return dp[n][r];
    }
}
int main()
{
    ll n,i,j,k,m,r;
    while(scanf("%llu%llu",&n,&r)!=EOF && n>0 && r>0){
    memset(dp , 0 ,sizeof(dp));
    printf("%llu\n",ncr(n,r));
    }
    return 0;
}
