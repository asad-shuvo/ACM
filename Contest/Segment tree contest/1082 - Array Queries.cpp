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
    int Left=2*node;
    int Right=2*node+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=tree[Left] + tree[Right];

}
int query(int node,int b,int e,int i,int j){
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j){
        return tree[node];
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
   int p1= query(Left,b,mid,i,j);
    int p2 = query(Right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int i,int newvalue){
    if(i>e || i<b){
        return ;
    }
    if(b>=i && e<=i){
        tree[node]=newvalue;
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
    //printf("\n");
    while(te--){
        m++;
            printf("Case %d:\n",m);
    //cin>>n>>t;
    scanf("%d%d",&n,&t);
    int x,y1,y2,p,q,y;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
      //  cin>>arr[i];
        init(1,0,n-1);
        while(t--){
        //cin>>x;
        scanf("%d",&x);
        if(x==1){
            //cin>>y;
    scanf("%d",&y);
    printf("%d\n",arr[y]);
   // arr[y]=0;
        //cout<<arr[y]<<endl;
       update(1,0,n-1,y,0);
        }
       else if(x==2){
        //cin>>p>>q;
        scanf("%d%d",&p,&q);
        int u=arr[p];
        u+=q;
        update(1,0,n-1,p,u);
        }
        else if(x==3){
            int y1,y2;
            //cin>>y1>>y2;
            scanf("%d%d",&y1,&y2);
            printf("%d\n",query(1,0,n-1,y1,y2));
            //cout<<query(1,0,n,y1,y2)<<endl;
        }
        //init(1,1,n);
       // cout<<query(1,1,n,1,2);
       //update(1,1,n,1,10);
        //cout<<query(1,1,n,1,2);
}
}
return 0;
}
