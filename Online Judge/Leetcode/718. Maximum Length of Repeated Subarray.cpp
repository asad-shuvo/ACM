class Solution {
public:
    int dp[1001][1001];
   
    int findLength(vector<int>& A, vector<int>& B) {
        memset(dp,0,sizeof(dp));
        int ans=0;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                if(A[i]==B[j]){
                    dp[i+1][j+1]=max(dp[i][j]+1,dp[i+1][j+1]+1);
                    ans=max(ans,dp[i+1][j+1]);
                }
            }
        }
        return ans;
    }
};
