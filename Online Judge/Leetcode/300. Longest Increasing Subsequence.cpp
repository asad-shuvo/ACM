class Solution {
public:
    int dp[3000];
    int fun(int u,vector<int>& nums){
        int maxi=0;
        if(dp[u]!=-1)return dp[u];
        
            for(int j=u+1;j<nums.size();j++){
                if(nums[j]>nums[u])
                maxi=max(maxi,fun(j,nums));
            }
            
        return dp[u]=maxi+1;
    }
    int lengthOfLIS(vector<int>& nums) {
        int M=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums.size();i++){
            M=max(M,fun(i,nums));
        }
        return M;
    }
};
