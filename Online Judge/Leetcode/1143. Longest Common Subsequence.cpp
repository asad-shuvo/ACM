class Solution {
public:
    string A,B;
    int dp[1005][1005];
    int cal(int i,int j){
        if(i==A.size() or j==B.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(A[i]==B[j]){
            return dp[i][j]=1+cal(i+1,j+1);
        }
        else{
            return dp[i][j]=max(cal(i+1,j),cal(i,j+1));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
       A=text1;
        B=text2;
        memset(dp,-1,sizeof(dp));
        if(A.size()==0 or B.size()==0)return 0;
        return cal(0,0);
    }
};
