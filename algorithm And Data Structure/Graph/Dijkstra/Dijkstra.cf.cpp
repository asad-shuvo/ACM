#include<bits/stdc++.h>
using namespace std;
#define mx 100005
#define ll long long int
vector<ll> edge[mx], cost[mx];
const ll infinity = 100000000000000;
struct data {
  ll city, dist;
  bool operator < (const data& p) const {
    return dist > p.dist;
  }
};
ll par[mx];
  ll d[mx]; // for storing distance
void dijkstra(ll source, ll destination) {
  data u, v;
  priority_queue<data> q;
memset(par,-1,sizeof(par));
  for (ll i = 0; i < mx; i++) d[i] = infinity;
  u.city = source, u.dist = 0;
  q.push(u);
  d[source] = 0;

  while(!q.empty()) {
    u = q.top(); q.pop();
    for (ll i = 0; i < edge[u.city].size(); i++) {
      v.city = edge[u.city][i];
      v.dist = cost[u.city][i] + d[u.city];
      // relaxing
      if(d[v.city] > v.dist) {
        d[v.city] = v.dist;
        par[v.city]=u.city;
        q.push(v);
      }
    }
  }
  //return d[destination];
}
int main(){
	ll n,e;
	scanf("%lld%lld",&n,&e);
	for(int i=0;i<e;i++)
	{
		ll u,v;
		ll w;
		scanf("%lld%lld%lld",&u,&v,&w);
		//cin>>u>>v>>w;
		edge[u].push_back(v);
		edge[v].push_back(u);
		cost[u].push_back(w);
		cost[v].push_back(w);

	}
	 dijkstra(1,n);
	if(d[n]==infinity) puts("-1\n");
	else
	{
		ll u=n;
		vector<ll>out;
		while(u!=-1)
		{
			out.push_back(u);

			u=par[u];

		}
		reverse(out.begin(),out.end());
		for(int i=0;i<out.size();i++)
			cout<<out[i]<<" ";
		puts("");

	}
}
