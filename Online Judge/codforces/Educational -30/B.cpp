#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
//#define mx 1000
string A;
int n;
int dp[mx],dir[mx];
int longest(int u)
{
	if(dp[u]!=-1) return dp[u];
	int maxi=0;
	for(int v=u+1;v<n;v++) //১ম শর্ত,v>u
	{
	    if(A[v]==A[u])return 0;
		else if(A[v]!=A[u]) //২য় শর্ত, value[v]>value[u]
		{
			if(longest(v)>maxi) //সর্বোচ্চ মানটা নিবো
			{
				maxi=longest(v);

			}
		}
	}
	dp[u]=1+maxi; //১ যোগ হবে কারণ u নম্বর নোডটাও পাথের মধ্যে আছে
	return dp[u];
}
int main()
{
	cin>>A;
	n=A.size();
	memset(dp,-1,sizeof dp);
	int LIS=0;
	for(int i=0;i<n;i++)
	{
		if(longest(i)>LIS)
		{
			LIS=longest(i);
		}
	}
	printf("LIS = %d ",LIS);

	return 0;
}
