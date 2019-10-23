#include <bits/stdc++.h>
using namespace std;
int dp[200][200];

int ncr(int n,int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    if(dp[n][r]!=0)
        return dp[n][r];
    else{
        dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    int n,c,r;
    scanf("%d%d",&n,&r);
    memset(dp , 0 ,sizeof(dp));
    printf("%d\n",ncr(n,r));
}
