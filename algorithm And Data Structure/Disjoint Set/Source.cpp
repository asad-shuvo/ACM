#include<bits/stdc++.h>
using namespace std;
int par[1000];
int find(int r){
	if(par[r]==r)return r;
	par[r]=find(par[r]);
	return par[r];
}
void Union(int a,int b){
	int u=find(a);
	int v=find(b);
	if(u==v){
		cout<<"They are already friend"<<endl;
	}
	else par[u]=v;
}
int main()
{
	int n,e;
	cin>>n>>e;
	for(int i=1;i<=n;i++)par[i]=i;
	for(int i=1;i<=e;i++){
		int x,y;
		cin>>x>>y;
		Union(x,y);
	}
}
