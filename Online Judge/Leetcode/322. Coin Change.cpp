class Solution {
public:
 
    int coinChange(vector<int>& coins, int amount) {
    int dp[amount+1];
        for(int i=0;i<=amount;i++){
            dp[i]=INT_MAX-1;
        }
        dp[0]=0;
        for(int j=0;j<coins.size();j++){
            for(int i=1;i<=amount;i++){
                if(i>=coins[j]){
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        if(dp[amount]==INT_MAX-1)return -1;
        return dp[amount];
    }
};
