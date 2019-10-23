#include <bits/stdc++.h>
using namespace std;
#define mx 1000005
int arr[mx],x;
int tree[mx*3];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int Left=2*node;
    int Right=2*node+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=tree[Left] + tree[Right];

}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1= query(Left,b,mid,i,j);
    int p2 = query(Right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e || i<b)
    {
        return ;
    }
    if(b >= i && e <= i)
    {
            if(x==2)tree[node]= tree[node]+newvalue;
            else tree[node] = 0;
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    update(Left,b,mid,i,newvalue);
    update(Right,mid+1,e,i,newvalue);
    tree[node]=tree[Left]+tree[Right];
}
int main()
{
// freopen("input.txt","rt",stdin);
    // freopen("output.txt","w",stdout);
    int n,test,t,te,m=0;
    scanf("%d",&te);
    while(te--)
    {
        printf("Case %d:\n",++m);

        scanf("%d%d",&n,&t);
        int y1,y2,p,q,y;
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);

        init(1,1,n);
        while(t--)
        {
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%d",&y);
                printf("%d\n",arr[y+1]);
                arr[y+1]=0;
                update(1,1,n,y+1,0);
            }
            else if(x==2)
            {

                scanf("%d%d",&p,&q);
                update(1,1,n,p+1,q);
                arr[p+1] += q;
            }
            else if(x==3)
            {
                int y1,y2;
                scanf("%d%d",&y1,&y2);
                printf("%d\n",query(1,1,n,y1+1,y2+1));
            }
        }
    }
    return 0;
}
