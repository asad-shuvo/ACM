#include<bits/stdc++.h>
using namespace std;
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
int par[100005];
int size[100005];
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
//	FILE
	int test,te=0;
	scanf("%d\n\n",&test);
	while(test--){
		te++;
		if(te>1)cout<<endl;
	//	memset(par,0,sizeof(par));
		char c[100];
		gets(c);
		int e=c[0]-'A'+1;
	//	cout<<e<<endl;
		for(int i=1;i<=e;i++){
			par[i]=i;
			size[i]=1;
		}
	char a[100];
//	gets(a);
		while(gets(a) && a[0]){
//			if(a==" ")break;
			int x=a[0]-'A'+1;
			int y=a[1]-'A'+1;
			Union(x,y);
		}
//		int cnt=0;
		set<int>s;
		for(int i=1;i<=e;i++){
			int v=find(i);
			//s.insert(par[i]);
		}
			for(int i=1;i<=e;i++){
		//	int v=find(i);
			s.insert(par[i]);
		}
		cout<<s.size()<<endl;
	}
}
