#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
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
int main()
{
    int n,k,s,test;
    sc1(test);
    while(test--)
    {
        sc3(n,k,s);
        ll dp[1][15005];
        mem(dp,0);
        dp[0][0]=1;
        int now=0,previous=1;
        for(int pos=1; pos<=n; pos++)
        {
            swap(now,previous);
            for(int sum=1; sum<=s; sum++)
            {
                if(sum<=k)
                {
                    dp[now][sum]=(dp[now][sum-1]+dp[previous][sum-1])%100000007;
                }
                if(sum>k)
                {
                    dp[pos][sum]=(dp[pos][sum-1]+dp[previous][sum-1])%100000007-dp[previous][sum-k-1];
                    if(dp[pos][sum]<0)
                        dp[pos][sum]+=100000007;
                }
            }
        }

        cout<<dp[now][s]<<endl;
    }
}

