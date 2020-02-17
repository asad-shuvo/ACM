#include<bits/stdc++.h>
using namespace std;
vector<int>G[10005];
map<int,int>indegree;
int color[10005];
int f=0;
void dfs(int source){
	color[source]=2;
	for(int i=0;i<G[source].size();i++){
		int v=G[source][i];
		if(color[v]==2){
			f=1;
			break;
		}
		if(color[v]==3)continue;
		if(color[v]==1){
			dfs(v);
		}
	}
	color[source]=3;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	while(m--){
		int x,y;
		scanf("%d%d",&x,&y);
		G[x].push_back(y);
		indegree[y]++;
	}
	for(int i=1;i<=n;i++){
		color[i]=1;
	}
	for(int i=1;i<=n;i++){
		if(color[i]==1)
		dfs(i);
	}
	if(f==1)printf("Sandro fails.\n");
	else{
		queue<int>q;
		for(int i=1;i<=n;i++){
			if(indegree[i]==0){
				q.push(i);
			}
		}
		vector<int>ans;
		while(!q.empty()){
			int u=q.front();
			ans.push_back(u);
			q.pop();
			for(int i=0;i<G[u].size();i++){
				int v=G[u][i];
				indegree[v]--;
				if(indegree[v]==0)q.push(v);
			}
		}
		printf("%d",ans[0]);
		for(int i=1;i<ans.size();i++){
			
//			if(i!=0)printf(" ");
			printf(" %d",ans[i]);
		}
		printf("\n");
	}
}
