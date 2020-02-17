int dp[38];
int call(int i,int A){
    if(i==A)return 1;
    if(i>A)return 0;
    if(dp[i]!=-1)return dp[i];
    int r1=call(i+1,A);
    int r2=call(i+2,A);
    return dp[i]=r1+r2;
}
int Solution::climbStairs(int A) {
    memset(dp,-1,sizeof(dp));
    int ret1=call(1,A);
    int ret2=call(2,A);
    return ret1+ret2;
}

