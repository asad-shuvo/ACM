#include<bits/stdc++.h>
using namespace std;
int dp[3*1000005];
int rec(int n)
{
    if(n==1)
        return 1;
        if(dp[n]!=-1)return dp[n];
    if(n%2==1){
        dp[n]= 1+rec(3*n+1);
    return dp[n];
    }
    else if(n%2==0){
         dp[n]=1+rec(n/2);
     return dp[n];
    }
}
int main()
{
    int n,m,k=0,i;
memset(dp,-1,sizeof(dp));
    while(scanf("%d%d",&n,&m)!=EOF && n>0 && m>0)
    {
        printf("%d %d ",n,m);
        if(n>m)
            swap(n,m);
        int p;
        int mx=0;
        for(i=n; i<=m; i++)
        {
          //  memset(dp,-1,sizeof(dp));
            p=rec(i);
            if(p>mx)
                mx=p;
        }
        printf("%d\n",mx);
    }
}

