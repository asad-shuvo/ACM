#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 30005
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
struct node{
    int v,w;
    node(int i,int j){
    v=i;
    w=j;
    }
    bool operator < (const node& p) const{
    return w<p.w;
    }
};
vector<node>G[mx];
int vis[mx],dis[mx];
void BFS(int source)
{
    mem(vis,0);
    //mem(dis,0);
    vis[source]=1;
    //dis[source]=0;

    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<G[u].size();i++)
        {
            //node t;
            int v=G[u][i].v;
          if(vis[v]==0){
      //      dis[v]=dis[u]+G[u][i].w;
            q.push(v);
            vis[v]=1;
          }
        }
    }
}
int main()
{
    int n,i,test,te=0;
   // sc1(test);

    sc1(n);
    F(i,1,n)
    {
        int x,y,z;
        sc3(x,y,z);
        G[x].p_b(node(y,z));
    }
    int sum=0;
    for(i=1;i<=n;i++)
    sort(G[i].begin(),G[i].end());
for(i=1;i<=n;i++){
    BFS(i);
    for(int k=1;k<=n;k++){
        if(vis[k]==0){
        sum+=G[]
        }
    }
}
}

