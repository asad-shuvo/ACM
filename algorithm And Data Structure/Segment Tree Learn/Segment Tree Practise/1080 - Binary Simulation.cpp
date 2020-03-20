#include<bits/stdc++.h>
using namespace std;
#define mx 100005
string A;
struct nde{
	int sum0,sum1;
};
nde tree[mx*4];
int lazy[mx*4];
void init(int node,int b,int e){
	if(b==e){
		int t=A[b-1]-'0';
		if(t==0){
		tree[node].sum0=1;
		tree[node].sum1=0;
	}
	else{
			tree[node].sum0=0;
		tree[node].sum1=1;
	}
	return;
	}
	int mid=b+(e-b)/2;
	int left=node*2;
	int right=node*2+1;
	init(node*2,b,mid);
	init(node*2+1,mid+1,e);
	tree[node].sum0=tree[left].sum0+tree[right].sum0;
	tree[node].sum1=tree[left].sum1+tree[right].sum1;
}
void update(int node,int b,int e,int i,int j){
	lazy[node]=lazy[node]%2;
	if(lazy[node]!=0){
		int t1=tree[node].sum0;
		int t2=tree[node].sum1;
		tree[node].sum1=t1;
		tree[node].sum0=t2;
		if(b!=e){
			lazy[node*2]+=1;
			lazy[node*2+1]+=1;
		}
		lazy[node]=0;
	}
	if(e<i or b>j)return;
	if(b>=i and e<=j){
			
			int t1=tree[node].sum0;
		int t2=tree[node].sum1;
		tree[node].sum1=t1;
		tree[node].sum0=t2;
		if(b!=e){
				lazy[node*2]+=1;
			lazy[node*2+1]+=1;
		}
		return;
	}
	int mid=b+(e-b)/2;
	update(node*2,b,mid,i,j);
	update(node*2+1,mid+1,e,i,j);
	tree[node].sum0=tree[node*2].sum0+tree[node*2+1].sum0;
	tree[node].sum1=tree[node*2].sum1+tree[node*2+1].sum1;
}
int query(int node,int b,int e,int i){
lazy[node]=lazy[node]%2;
	if(lazy[node]!=0){
	int t0=tree[node].sum0;
	int t1=tree[node].sum1;
	tree[node].sum0=t1;
	tree[node].sum1=t0;
	if(b!=e){
		lazy[node*2]+=1;
		lazy[node*2+1]+=1;
	}
	lazy[node]=0;
	}
	if(e<i or b>i)return 0;
	if(b>=i and e<=i)return tree[node].sum1;
	int mid=b+(e-b)/2;
	return query(node*2,b,mid,i)+query(node*2+1,mid+1,e,i);
}
int main()
{
	int test,te=0;
	scanf("%d",&test);
	while(test--){
		
		cin>>A;
		int n=A.size();
		for(int i=0;i<mx*4;i++){
			tree[i].sum0=0;
			tree[i].sum1=0;
			lazy[i]=0;
		}
		init(1,1,n);
		
		int q;
		printf("Case %d:\n",++te);
		scanf("%d",&q);
			
		while(q--){
			getchar();
			char a;
			scanf("%c",&a);
			if(a=='I'){
				int x,y;
				scanf("%d%d",&x,&y);
				update(1,1,n,x,y);
			}
			else{
				int x;
				scanf("%d",&x);
				printf("%d\n",query(1,1,n,x));
			}
		}
	}
}
