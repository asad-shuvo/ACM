#include<bits/stdc++.h>
using namespace std;
#define mx 100000
int tree[3*mx];
int arr[mx],mn[3*mx],Mx[3*mx];
int n,d;
void init1(int node,int b,int e){
    if(b==e)
    {
        mn[node]=arr[b];
        return;
    }
    int Left=2*node;
    int Right=2*node+1;
    int mid=(e+b)/2;
    init1(Left,b,mid);
    init1(Right,mid+1,e);
    mn[node]=min(mn[Left],mn[Right]);
    //tree[node]=min(tree[Left],tree[Right]);
}
void init2(int node,int b,int e){
    if(b==e)
    {
        Mx[node]=arr[b];
        return;
    }
    int Left=2*node;
    int Right=2*node+1;
    int mid=(e+b)/2;
    init2(Left,b,mid);
    init2(Right,mid+1,e);
    //tree[node]=max(tree[Left],tree[Right]);
   Mx[node]=max(Mx[Left],Mx[Right]);
}
int query1(int node,int b,int e,int i,int j){
    if(i>e || j<b){
        return mx;
    }
    if(b>=i && e<=j){
        return mn[node];
        //return tree[node];
    }
     int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query1(Left,b,mid,i,j);
    int p2=query1(Right,mid+1,e,i,j);
    return min(p1,p2);
}
int query2(int node,int b,int e,int i,int j){
    if(i>e || j<b){
        return -1000;
    }
    if(b>=i && e<=j){
        return Mx[node];
        //return tree[node];
    }
     int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query2(Left,b,mid,i,j);
    int p2=query2(Right,mid+1,e,i,j);
    return max(p1,p2);
}
int main()
{
    int i,j,k,l,m;
    int test;
    scanf("%d",&test);
    int t=0;

    while(test--){
            t++;
            m=-1;
    scanf("%d%d",&n,&d);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    init1(1,1,n);
    init2(1,1,n);
    for(i=1;i<=n;i++){
    j=i+(d-1);
            int q1=query2(1,1,n,i,j);
            int q2=query1(1,1,n,i,j);
            k=q1-q2;
            m=max(k,m);
    }
     printf("Case %d: %d\n",t,m);
    }
    return 0;
}
