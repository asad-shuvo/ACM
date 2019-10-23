#include <bits/stdc++.h>
using namespace std;
#define mx 100002
vector<long long int>edge[mx],cost[mx];
long long int par[mx];
    long long int d[mx];

const long long int infinity=10000000000000;
struct data{
    long long int city,dist;
    bool operator < (const data& p) const {
    return dist >p.dist;
    }
};

void dijkstra(long long int destination,long long int source){
    memset(par,-1,sizeof(par));
    for(long long int i=0;i<mx;i++) d[i]=infinity;

    priority_queue<data>q;

    data u,v;
    u.city=source;
    u.dist=0;
    q.push(u);
    d[source]=0;
    while(!q.empty()){
        u=q.top();
        q.pop();
       // long long int pp=u.city;
        //if(pp==n) return d[n];
       // q.pop();
        long long int ucost=d[u.city];
        for(long long int i=0;i<edge[u.city].size();i++){

            v.city=edge[u.city][i];
            v.dist=cost[u.city][i]+ucost;
            if(d[v.city]>v.dist){
                d[v.city]=v.dist;
        par[v.city]=u.city;
                q.push(v);

            }
        }
    }
    //return d[ destination ];

}
int main()
{
    long long int n,e;
  scanf("%lld%lld",&n,&e);
  for(long long int i=0;i<e;i++){
    long long int v,u,w;
    scanf("%lld%lld%lld",&u,&v,&w);
    edge[u].push_back(v);
    edge[v].push_back(u);
    cost[u].push_back(w);
    cost[v].push_back(w);
  }
  dijkstra(n,1);

  if(d[n]==infinity)
        printf("-1\n");
  else{
    long long int u=n;
    vector<long long int>out;
    while(u!=-1){
        out.push_back(u);
        u=par[u];
    }
    reverse(out.begin(),out.end());
    for(long long int i=0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }
    puts(" ");
  }
}
