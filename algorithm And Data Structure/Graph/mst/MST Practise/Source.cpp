#include<bits/stdc++.h>
using namespace std;
struct edge{
	int u,v,w;
	bool operator<(const edge& p) const{
		return w<p.w;
	}
};
int par[10005];
vector<edge>e;
int find(int r){
	if(par[r]==r)return r;
	par[r]=find(par[r]);
	return par[r];
}
int mst(int n){
	sort(e.begin(),e.end());
	for(int i=1;i<=n;i++)par[i]=i;
	int cnt=0,s=0;
	for(int i=0;i<(int)e.size();i++){
		int u=find(e[i].u);
		int v=find(e[i].v);
		if(u!=v){
			s+=e[i].w;
			cnt++;
			par[u]=v;
			if(cnt==n-1)break;
		}
	}
	return s;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edge get;
		get.u=u;
		get.v=v;
		get.w=w;
		e.push_back(get);
	}	
	cout<<mst(n)<<endl;
	
}
