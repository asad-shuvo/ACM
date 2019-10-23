#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx];
int tree[mx*3];
void init(int node,int b,int e){
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
   tree[node]= min(tree[Left],tree[Right]);
}
int query(int node,int b,int e,int i,int j){
    if(i>e ||j<b)
        return mx;
    if(b>=i && e<=j)
        return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
int     p1=query(Left,b,mid,i,j);
 int   p2=query(Right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int N,q,te=0,test;
    scanf("%d\n",&test);
    while(test--){
            printf("Case %d:\n",++te);
    scanf("%d%d",&N,&q);
    for(int i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    init(1,1,N);
    while(q--){
            int i,j;
    scanf("%d%d",&i,&j);
    printf("%d\n",query(1,1,N,i,j));
    }
    }
}
