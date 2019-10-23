#include <bits/stdc++.h>
using namespace std;
long long int dp[100][100];
#define  lli long long int
long long int ncr(long long int n,long long int r){
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
    long long int n,i,j,k,m,r;
    while(scanf("%lld%lld",&n,&r)!=EOF && n>0 && r>0){
    memset(dp , 0 ,sizeof(dp));
    printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,ncr(n,r));
    }
    return 0;
}
