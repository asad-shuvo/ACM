#include <bits/stdc++.h>
using namespace std;
#define Max 100005
long long int arr[Max];
long long int tree[Max*3];

void initial(long long int node,long long int b,long long int e)
{
    if(b==e) {
    tree[node]=arr[b];
    return;
    }
    long long int Left=2*node;
    long long int Right=2*node+1;
    long long int mid=(b+e)/2;
    initial(Left,b,mid);
    initial(Right,mid+1,e);
    tree[node]=max(tree[Left],tree[Right]);
}
long long int queries(long long int node,long long int b,long long int e,long long int i,long long int j)
{
    if(i>e || j<b) return -10000000;
    if(b>=i && e<=j) return tree[node];

    long long int Left=node*2;
    long long int Right=node*2+1;
    long long int mid=(b+e)/2;
    long long int p1=queries(Left,b,mid,i,j);
    long long int p2=queries(Right,mid+1,e,i,j);
    return max(p1,p2);
}

int main()
{
    long long int n,q,test;


    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++)
        scanf("%lld",&arr[i]);

        initial(1,1,n);
        scanf("%lld",&q);
    while(q--){
            long long int x, y;
    scanf("%lld%lld",&x,&y);
    printf("%lld\n",queries(1,1,n,x,y));
    }
    }

