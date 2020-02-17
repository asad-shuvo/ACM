class Solution {
public:
    int maxCoins(vector<int>& nums) {
        if(nums.size()==0)return 0;
       int sz=nums.size();
    int dp[sz+1][sz+1];
    memset(dp,0,sizeof(dp));
    
    for(int len=1;len<=sz;len++){
        for(int i=0;i<sz-len+1;i++){
            int j=i+len-1;
            for(int k=i;k<=j;k++){
                int leftvalue=1,rightvalue=1;
                if(i!=0){
                    leftvalue=nums[i-1];
                }
                if(j!=sz-1){
                    rightvalue=nums[j+1];
                }
                int before=0,after=0;
                if(i!=k){
                    before=dp[i][k-1];
                }
                if(j!=k){
                    after=dp[k+1][j];
                }
                dp[i][j]=max(dp[i][j],before+after+rightvalue*leftvalue*nums[k]);
            }
        }
    }
    return dp[0][sz-1];
    }
};
