class Solution {
public:
    int dp[302][301];
    int row,col;
    int fun(int i,int j,vector<vector<int>>& matrix){
        if(i<0 or j<0 or i>=row or j>=col)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(matrix[i][j]==0)return 0;
        return dp[i][j]=min(min(fun(i-1,j-1,matrix),fun(i,j-1,matrix)),fun(i-1,j,matrix))+1;
    }
    int countSquares(vector<vector<int>>& matrix) {
       memset(dp,-1,sizeof(dp));
        row=matrix.size();
        col=matrix[0].size();
        int cnt=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1){
                    cnt+=fun(i,j,matrix);
                }
            }
        }
        return cnt;
    }
};
