#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 10005
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
vector<int>G[mx];
int cost,taken[mx];
int dfs(int src)
{
    taken[src]=1;
        for(int i=0;i<G[src].size();i++){
            if(taken[G[src][i]]==0){
                cost++;
                taken[G[src][i]]=1;
                dfs(G[src][i]);
            }
        }
}
int main()
{
    int n,m,test,te=0;
    sc1(test);
    while(test--){
    sc2(n,m);
    for(int i=1;i<=m;i++){
        int a,b;
        sc2(a,b);
        G[a].p_b(b);
        G[b].p_b(a);
    }
    pr("Case #%d:\n",++te);
            mem(taken,0);
            cost=0;
        dfs(i);
        if(i>1)pr(" ");
        pr("%d",cost);
       // cout<<cost<<" ";
    }
    pr("\n");
        for(int i=0;i<=n+1;i++)G[i].clear();

}
}

