#include <bits/stdc++.h>
using namespace std;
int dp[6][1000];
int arr[5]={1,5,10,25,50};
#define N 5
int func(int pos,int sum)
{
    if(pos>=N){
        if(sum==0) return 1;
        else
            return 0;
    }
    if(dp[pos][sum]!=-1)
        return dp[pos][sum];
    int res=func(pos+1,sum-arr[pos])+func(pos+1,sum);
    dp[pos][sum]=res;
    return res;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int sum;
    while(scanf("%d",&sum)!=EOF){
        printf("%d\n",func(0,sum));
    }

}
