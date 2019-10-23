#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx],n,last[mx],seg[mx];
int tree[mx*4];
void update(int node,int b,int e,int i,int val)
{
 if(i>e || i<b)
        return ;

    if(b>=i && e<=i){
        tree[node]=tree[node]+val;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,val);
    update(right,mid+1,e,i,val);
    tree[node]=tree[right]+tree[left];
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
int main()
{
    scanf("%d",&n);
    memset(last, 0 ,sizeof(last));
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);

       for(int i=1;i<=n;i++)
       {
           if(last[arr[i]]==0)
            update(1,1,n,i,1);

           else if(last[arr[i]]!=0)
           {
                              update(1,1,n,last[arr[i]],0);
               update(1,1,n,i,1);
           }
       }
       int q;
       cin>>q;
       while(q--){
        int l,m;
        cin>>l>>m;
        cout<<query(1,1,n,l,m)<<endl;
       }
}
