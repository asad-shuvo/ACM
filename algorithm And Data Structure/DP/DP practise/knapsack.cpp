#include<bits/stdc++.h>
using namespace std;
int n,cap;
int weight[50],cost[50];
int dp[50][50];
int fun(int i,int w)
{
	if(i==n+1)return 0; 
	if(dp[i][w]!=-1)return dp[i][w];
	int p1=0,p2=0;
	if(w+weight[i]<=cap){
		p1=cost[i]+fun(i+1,w+weight[i]);
	}
	p2=fun(i+1,w);
	dp[i][w]=max(p1,p2);
	return dp[i][w];
	
}
int main()
{
	cin>>n>>cap;
	memset(dp,-1,sizeof(dp));
	for(int i=1;i<=n;i++){
		cin>>weight[i]>>cost[i];
	}	
	int ret=fun(1,0);
	cout<<ret<<endl;
	
}
