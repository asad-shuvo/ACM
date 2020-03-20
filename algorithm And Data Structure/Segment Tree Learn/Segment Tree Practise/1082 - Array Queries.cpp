#include<bits/stdc++.h>
using namespace std;
int arr[100005],tree[100005*3+5];
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
	tree[node]=min(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j ){
	if(b>=i and e<=j){
		return tree[node];
	}
	if(i>e or j<b)return 1<<28;
	int mid=b+(e-b)/2;
	int left=node*2;
	int right=node*2+1;
	int p1=query(left,b,mid,i,j);
	int p2=query(right,mid+1,e,i,j);
	return min(p1,p2);
	
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
			int x,y;
			scanf("%d%d",&x,&y);
			printf("%d\n",query(1,1,n,x,y));
		}
	}
}
