class Solution {
public:
    vector<vector<int>>tmp;
    int dp[1005][1005];
    int row,col;
    int fun(int i,int j){
        if(i>=row or j>=col or i<0 or j<0)return INT_MAX;
        if(i==row-1 and j==col-1)return tmp[i][j];
        if(dp[i][j]!=0)return dp[i][j];
        return dp[i][j]=tmp[i][j]+min(fun(i,j+1),fun(i+1,j));
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,0,sizeof(dp));
    tmp=grid;
        row=grid.size();
        col=grid[0].size();
        return fun(0,0);
    }
};
