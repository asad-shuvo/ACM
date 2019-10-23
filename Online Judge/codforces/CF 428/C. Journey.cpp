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
    int dis[100005];
    int vis[100005];
dd take;
int last;
    vector<int>G[100005];
dd BFS(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=1;
    int last;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int i=0;i<G[u].size();i++)
        {
             int v=G[u][i];
            if(vis[v]!=1){
            take++;
                vis[v]=1;
                q.push(v);
            }
        }

    }

return take;
}
int main()
{
    int n;
    sc1(n);
    for(int i=1;i<n;i++){
        int x,y;
        sc2(x,y);
        G[x].p_b(y);
        G[y].p_b(x);
    }

    mem(vis,0);
    dd sum=0;
    vis[1]=1;
    dd sz=G[1].size();
    for(int i=0;i<G[1].size();i++){
            take=1;
        if(vis[G[1][i]]==0)
       sum+=BFS(G[1][i]);
    }
if(n==1)pr("%.16lf\n",n-1);
if(sz==0)pr("%0.000000000000000\n");
else
    pr("%.16lf",sum/sz);
}

