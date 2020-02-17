int n;
vector<int>tmp;
int dp[2505];
int longest(int u){
    int M=0;
    if(dp[u]!=-1)return dp[u];
    for(int i=u+1;i<n;i++){
        if(tmp[i]>tmp[u]){
            M=max(longest(i),M);
        }
    }
   return dp[u]=M+1;
}
int Solution::lis(const vector<int> &A) {
memset(dp,-1,sizeof(dp));
    tmp=A;
    n=tmp.size();
    int Mx=0;
    for(int i=0;i<n;i++){
        if(longest(i)>Mx){
            Mx=longest(i);
        }
    }
    return Mx;
}

