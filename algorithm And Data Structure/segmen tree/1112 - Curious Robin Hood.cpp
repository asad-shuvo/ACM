#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx];
int tree[mx*3],k;
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
   tree[node]= tree[Left]+tree[Right];
}
int query(int node,int b,int e,int i,int j){
    if(i>e ||j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
int     p1=query(Left,b,mid,i,j);
 int   p2=query(Right,mid+1,e,i,j);
    return (p1+p2);
}

void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e || i<b)
        return ;

    if(b>=i && e<=i){
            if(k==2){
        tree[node]=tree[node]+newvalue;
            }
            else{
                tree[node]=0;
            }
        return;
    }
    int Left=2*node;
    int Right=2*node+1;
    int mid=(b+e)/2;
    update(Left,b,mid,i,newvalue);
    update(Right,mid+1,e,i,newvalue);
    tree[node]=tree[Left] + tree[Right];
}
int main()
{
    int N,q,m=0,test;
    scanf("%d\n",&test);
while(test--){
        printf("Case %d:\n",++m);
    scanf("%d%d",&N,&q);
    for(int i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    init(1,1,N);
    while(q--){
            int i,j;
            scanf("%d",&k);
            if(k==1){
                int x;
                    scanf("%d",&x);
                printf("%d\n",arr[x+1]);
                arr[x+1]=0;
                update(1,1,N,x+1,0);
            }
            if(k==2)
            {
                int y,z;
                scanf("%d%d",&y,&z);
                arr[y+1]=arr[y+1]+z;
                update(1,1,N,y+1,z);
            }
            if(k==3){
                    int i,j;
    scanf("%d%d",&i,&j);
    printf("%d\n",query(1,1,N,i+1,j+1));
    }
    }
    }

}
