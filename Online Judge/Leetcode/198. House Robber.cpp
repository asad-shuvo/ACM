class Solution {
public:
    int dp[3000];
    int fun(int i,vector<int>& nums){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int f1=nums[i]+fun(i+2,nums);
        int f2=nums[i]+fun(i+3,nums);
        return dp[i]=max(f1,f2);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return max(fun(0,nums),fun(1,nums));
    }
};
