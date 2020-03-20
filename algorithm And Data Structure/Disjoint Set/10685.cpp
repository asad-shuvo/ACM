#include<bits/stdc++.h>
using namespace std;
int par[5005];
int find(int r){
	if(par[r]==r)return r;
	par[r]=find(par[r]);
	return par[r];
}
void Union(int a,int b){
	int u=find(a);
	int v=find(b);
	if(u==v)return;
	par[u]=v;
}

int main()
{
	int c,r;
	while(scanf("%d%d",&c,&r)){
		if(c==0 and r==0)break;
		int cnt=0;
		map<string,int>mp;
		for(int i=1;i<=c;i++){
			string a;
			cin>>a;
			mp[a]=i;
			par[i]=i;
		}
		for(int i=1;i<=r;i++){
			string a,b;
			cin>>a>>b;
			int u=mp[a];
			int v=mp[b];
			Union(u,v);
		}
		for(int i=1;i<=c;i++){
		int ret=find(i);
		}
		int arr[c+5]={0};
		int M=-1;
			for(int i=1;i<=c;i++){
	arr[par[i]]++;
	M=max(arr[par[i]],M);
		}
		
		printf("%d\n",M);
	}
}
