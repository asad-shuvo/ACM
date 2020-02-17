int dp[1000][1000];
vector<vector<int> >tmp;
int m,n;
int fun(int i,int j){
    if(i==m-1 and j==n-1)return tmp[i][j];
    if(i<0 or j<0 or i>=m or j>=n){
        return 1<<28;
    }
    if(dp[i][j]!=0)return dp[i][j];
    return dp[i][j]=min((fun(i+1,j)+tmp[i][j]),(fun(i,j+1)+tmp[i][j]));
}
int Solution::minPathSum(vector<vector<int> > &A) {
    memset(dp,0,sizeof(dp));
    tmp=A;
     m=A.size(),n=A[0].size();
    return fun(0,0);
}

