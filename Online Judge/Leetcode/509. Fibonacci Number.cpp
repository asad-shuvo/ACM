class Solution {
public:
    int dp[35];
    int F(int n){
        if(n==0)return 0;
        if(n==1)return 1;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=F(n-1)+F(n-2);
    }
    int fib(int N) {
        memset(dp,-1,sizeof(dp));
        return F(N);
    }
};
