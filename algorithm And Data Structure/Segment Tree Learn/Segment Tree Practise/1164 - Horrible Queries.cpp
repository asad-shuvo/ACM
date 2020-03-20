#include <bits/stdc++.h>
using namespace std;
#define mx 100005
#define ll long long int
long long int lazy[mx*4],tree[mx*4];
void update(ll node,ll b,ll e,ll i ,ll j,ll v){
	if(lazy[node]!=0){
		tree[node]+=((e-b+1)*lazy[node]);
		if(b!=e){
			lazy[node*2+1]+=lazy[node];
			lazy[node*2+2]+=lazy[node];
		}
		lazy[node]=0;
	}
		
		if(b>e or b>j or e<i)return;
		if(b>=i and e<=j){
			tree[node]+=(e-b+1)*v;
			if(e!=b){
				lazy[node*2+1]+=v;
				lazy[node*2+2]+=v;
			}
			return;
		}
		ll mid=b+(e-b)/2;
		ll left=node*2+1;
		ll right=node*2+2;
		update(left,b,mid,i,j,v);
		update(right,mid+1,e,i,j,v);
		tree[node]=tree[left]+tree[right];
}
ll query(ll node,ll b,ll e,ll i,ll j){
	if(lazy[node]!=0){
		tree[node]+=(e-b+1)*lazy[node];
		if(b!=e){
			lazy[node*2+1]+=lazy[node];
			lazy[node*2+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(b>e or i>e or j<b)return 0;
	if(b>=i and e<=j){
		return tree[node];
	}
	ll mid=b+(e-b)/2;
	return query(node*2+1,b,mid,i,j)+query(node*2+2,mid+1,e,i,j);
}
int main()
{
	int test,te=0;
	scanf("%d",&test);
	while(test--){
		long long int n,q;
		scanf("%lld%lld",&n,&q);
		long long int cz,x,y,v;
		for(int i=0;i<=n*4-2;i++){
			tree[i]=0,lazy[i]=0;
		}
		printf("Case %d:\n",++te);
		while(q--){
		
		scanf("%lld%lld%lld",&cz,&x,&y);
		
		if(cz==0){
			scanf("%lld",&v);
			update(0,0,n-1,x,y,v);
		}
		else{
			printf("%lld\n",query(0,0,n-1,x,y));
		}
	}
}
}
