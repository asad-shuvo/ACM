#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int n,mat[100][100];
int vis[100];
int par[100];
bool dfs(int current)
{
	int i;
	vis[current]=1;
	for(i=1;i<=n;i++){
		if(mat[current][i]!=0){
			if(par[current]==i)continue;
			if(vis[i]==1)return true;
			par[i]=current;
			if(dfs(i)){
				printf("%d\n",i);
//				cout<<i<<endl;
			return true;}
		}
	}
	return false;
}
bool hasCycle()
{
	int i;
	for( i=1;i<=n;i++){
		if(vis[i]==0){
			if(dfs(i))return true;
		}
	}
	return false;
}
int main()
{
	scanf("%d",&n);
	int i,j;
	for( i=1;i<=n;i++){
		for( j=1;j<=n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	bool res=hasCycle();
	if(res)printf("Cycle\n");
	else printf("No cycle\n");
}
//6
//0 1 0 0 0 1
//1 0 1 0 0 0
//0 1 0 1 0 0
//0 0 1 0 1 0
//0 0 0 1 0 0
//1 0 0 0 0 0
