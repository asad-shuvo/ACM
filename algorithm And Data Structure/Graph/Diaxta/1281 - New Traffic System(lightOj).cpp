#include <bits/stdc++.h>
using namespace std;
#define pr printf
#define sc scanf
#define ll long long int
#define mx 100005
const ll infinity=10000000000000;
vector<ll>cost[mx],edge[mx];
ll par[mx];
ll d[mx];
struct data{
    long long int city,dist;
    bool operator < (const data& p) const {
    return dist >p.dist;
    }
};

void dijkstra(long long int source,long long int destination){
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
    ll n,s,t,test,m,m1=0;
    sc("%lld",&test);
    while(test--){
    sc("%lld%lld%lld%lld",&n,&m,&s,&t);
    for(ll i=0;i<mx;i++){
        edge[i].clear();
        cost[i].clear();
    }
    while(m--){
        ll u,v,w;
        sc("%lld%lld%lld",&u,&v,&w);
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[v].push_back(w);
        cost[u].push_back(w);

    }

    dijkstra(s,t);
    if(d[t]==infinity)
        pr("Case #%lld: unreachable\n",++m1);

  else
    printf("Case #%lld: %lld\n",++m1,d[t]);
}
}

