int dp[455][455];
int fun(string A,string B,int m,int n){
    if(m==0)return n;
    if(n==0)return m;
    if(dp[m][n]!=-1)return dp[m][n];
    if(A[m-1]==B[n-1]){
        return dp[m][n]=fun(A,B,m-1,n-1);
    }
    return dp[m][n]=1+min(fun(A,B,m-1,n),min(fun(A,B,m-1,n-1),fun(A,B,m,n-1)));
}
int Solution::minDistance(string A, string B) {
//  Iterative and recursion both works
    // int dp[A.size()+1][B.size()+1];
   
    // for(int i=0;i<=A.size();i++){
    //     for(int j=0;j<=B.size();j++){
    //         if(i==0){
    //             dp[i][j]=j;
    //         }
    //         else if(j==0){
    //             dp[i][j]=i;
    //         }
    //         else{
                
    //         if(A[i-1]==B[j-1]){
    //             dp[i][j]=dp[i-1][j-1];
    //         }
    //         else{
    //             dp[i][j]=min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j])+1;
    //         }
    //     }
    //     }
    // }
    // return dp[A.size()][B.size()];
    int m=A.size(),n=B.size();
    memset(dp,-1,sizeof(dp));
    return fun(A,B,m,n);
    
}

