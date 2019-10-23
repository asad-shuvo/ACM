#include <bits/stdc++.h>
using namespace std;
#define Max 100005
int arr[Max];
int tree[Max*3];

void initial(int node,int b,int e)
{
    if(b==e) {
    tree[node]=arr[b];
    return;
    }
    int Left=2*node;
    int Right=2*node+1;
    int mid=(b+e)/2;
    initial(Left,b,mid);
    initial(Right,mid+1,e);
    tree[node]=min(tree[Left],tree[Right]);
}
int queries(int node,int b,int e,int i,int j)
{
    if(i>e || j<b) return Max;
    if(b>=i && e<=j) return tree[node];

    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=queries(Left,b,mid,i,j);
    int p2=queries(Right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    int n,q,test,m=0;
    scanf("%d",&test);
    while(test--){
            printf("Case %d:\n",++m);
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);

        initial(1,1,n);
    while(q--){
            int x, y;
    scanf("%d%d",&x,&y);
    printf("%d\n",queries(1,1,n,x,y));
    }
    }
}
