#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
int n,value[mx],dp[mx];
int longest(int u)
{
    if(dp[u]!=-1)return dp[u];
    int maxi=0;
    for(int v=u+1;v<=n;v++){
        if(value[v]>value[u]){
            if(longest(v)>maxi)
                maxi=longest(v);
        }
    }
    return dp[u]=1+maxi;

}
int main()
{
    int i;
    mem(dp,-1);
    sc1(n);
    F(i,1,n){sc("%d",&value[i]);}
    int start=0,LIS=0;
    F(i,1,n){
    if(longest(i)>LIS)
        LIS=longest(i);
    start=i;
    }
    cout<<LIS<<endl;
    //sc("%d",&n);
}

