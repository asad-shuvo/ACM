#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int n,mat[100][100],cntw=0,cntb=0,cntg=0,bSet[100],gSet[100],wSet[100];
bool dfs(int current){
	wSet[current]=0;
	cntw--;
	gSet[current]=1;
	cntg++;
	int i;
	for(i=1;i<=n;i++){
		if(mat[current][i]!=0){
			if(bSet[i]==1)continue;
			if(gSet[i]==1)return true;
			if(dfs(i))return true;
		}
	}
	bSet[current]=1;
	cntb++;
	gSet[current]=0;
	cntg++;
	return false;
}
bool hasCycle(){
	int i,j;
	for(i=1;i<=n;i++){
		cntw++;
		wSet[i]=1;
	}
	while(cntw>0){
		for(i=1;i<=n;i++){
			if(wSet[i]==1){
				if(dfs(i))return true;
			}
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
