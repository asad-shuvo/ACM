#include <bits/stdc++.h>
using namespace std;
#define mx 100005
vector<long long int  >g[mx],cost[mx];
long long int   par[mx],d[mx];
struct node{
    long long int   u,w;
    node(long long int   a,long long int   b){
    u=a;
    w=b;
    }
    bool operator < (const node& p) const { return w>p.w;}
};
long long int   dijkstra(long long int   n){
    memset(par,-1,sizeof(par));
    memset(d,63,sizeof(d));
    priority_queue<node>q;
    q.push(node(1,0));
    d[1]=0;
    while(!q.empty()){
        node top=q.top();
        q.pop();
        long long int   u=top.u;
        if(u==n) return d[n];
        for(long long int   i=0;i<(long long int  )g[u].size();i++){
            long long int   v=g[u][i];
            if(d[u]+cost[u][i]<d[v]){
                d[v]=d[u]+cost[u][i];
                par[v]=u;
                q.push(node(v,d[v]));
            }
        }
    }
    return -1;
}
int main()
{
  long long int   n,e;
  scanf("%d%d",&n,&e);
  for(long long int   i=0;i<e;i++){
    long long int   v,u,w;
    scanf("%d%d%d",&u,&v,&w);
    g[u].push_back(v);
    g[v].push_back(u);
    cost[u].push_back(w);
    cost[v].push_back(w);
  }
  long long int   res=dijkstra(n);

  if(res==-1)
        prlong long int  f("-1\n");
  else{
    long long int   u=n;
    vector<long long int  >out;
    while(u!=-1){
        out.push_back(u);
        u=par[u];
    }
    reverse(out.begin(),out.end());
    for(long long int   i=0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }
    puts(" ");
  }
}
