#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int n,arr[100];
int total_sum;
int dp[22][10005],diff;
void fun(int pos,int sum)
{
    int t=total_sum-sum;
     diff=min(diff,abs(sum-t));
     if(pos==n)return;
     if(dp[pos][sum]!=-1){
        dp[pos][sum]=min(diff,dp[pos][sum]);
        return ;
     }
     fun(pos+1,sum);
     fun(pos+1,sum+arr[pos]);
     dp[pos][sum]=diff;
  //   return dp[pos][sum];
//
}
int main()
{
    string A;
    int test;
    sc("%d",&test);
                getchar();

    while(test--){
    getline(cin,A);
    stringstream ss(A);
    int d,t=0;
        total_sum=0;

    while(ss>>d){
        arr[t++]=d;
         total_sum+=d;
    }
    n=t;
    diff=INT_MAX/3;
    memset(dp,-1,sizeof(dp));
    fun(0,0);
    if(diff==0)pr("YES\n");
    else
        pr("NO\n");
}
}

