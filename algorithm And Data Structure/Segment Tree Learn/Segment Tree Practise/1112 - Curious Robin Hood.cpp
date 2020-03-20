#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx],tree[mx*3+5];
int cz;
void init(int node,int b,int e){
	if(b==e){
		tree[node]=arr[b];
		return;
	}
	int mid=b+(e-b)/2;
	int left=node*2;
	int right=node*2+1;
	init(left,b,mid);
	init(right,mid+1,e);
	tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j){
	if(b>=i and e<=j){
		return tree[node];
	}
	if(i>e or j<b)return 0;
	int mid=b+(e-b)/2;
	int left=node*2;
	int right=node*2+1;
	int p1=query(left,b,mid,i,j);
	int p2=query(right,mid+1,e,i,j);
	return (p1+p2);
}
void update(int node,int b,int e,int i,int v){
	if(b>=i and e<=i){
		if(cz==1)
		tree[node]=0;
		else{
			tree[node]+=v;
		}
		return;
	}
	if(i>e or i<b)return;
	int mid=b+(e-b)/2;
	int left=node*2;
	int right=node*2+1;
	update(left,b,mid,i,v);
	update(right,mid+1,e,i,v);
	tree[node]=tree[left]+tree[right];
}
int main()
{
	int test,te=0;
	scanf("%d",&test);
	while(test--){
		int n,q;
		scanf("%d%d",&n,&q);
		for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
		}
		init(1,1,n);
		printf("Case %d:\n",++te);
		while(q--){
		//	int cz;
			scanf("%d",&cz);
			if(cz==1){
				int x;
				scanf("%d",&x);
				x++;
				printf("%d\n",arr[x]);
				arr[x]=0;
				update(1,1,n,x,0);
				
			}
			else if(cz==2){
				int x,y;
				scanf("%d%d",&x,&y);
				x++;
				arr[x]+=y;
				update(1,1,n,x,y);
			}
			else{
				int x,y;
				scanf("%d%d",&x,&y);
				x++,y++;
				printf("%d\n",query(1,1,n,x,y));
			}
		}
	}
}
