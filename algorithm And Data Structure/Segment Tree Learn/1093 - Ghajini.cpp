#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx],tree[mx*3],mxx[mx*3],mn[mx*3];
void init1(int node,int b,int e)
{
    if(b==e){
        mxx[node]=arr[b];
        return;
    }
    int mid=(b+e)/2;
    int Left=node*2;
    int Right=node*2+1;
    init1(Left,b,mid);
    init1(Right,mid+1,e);
    mxx[node]=max(mxx[Left],mxx[Right]);
}
void init2(int node,int b,int e)
{
    if(b==e){
        mn[node]=arr[b];
        return;
    }
    int mid=(b+e)/2;
    int Left=node*2;
    int Right=node*2+1;
    init2(Left,b,mid);
    init2(Right,mid+1,e);
    mn[node]=min(mn[Left],mn[Right]);
}
int query1(int node,int b,int e,int i,int j){
    if(i>e || j<b)
    {
        return -10000;
    }
    if(b>=i && e<=j){
        return mxx[node];
    }
    int mid=(b+e)/2;
    int Left=(node*2);
    int Right=(node*2)+1;
    int p1=query1(Left,b,mid,i,j);
    int p2=query1(Right,mid+1,e,i,j);
    return max(p1,p2);
}
int query2(int node,int b,int e,int i,int j){
    if(i>e || j<b)
    {
        return mx;
    }
    if(b>=i && e<=j){
        return mn[node];
    }
    int mid=(b+e)/2;
    int Left=(node*2);
    int Right=(node*2)+1;
    int p1=query2(Left,b,mid,i,j);
    int p2=query2(Right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int n,d,te=0,test;
    scanf("%d",&test);
    while(test--){

    scanf("%d%d",&n,&d);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    init1(1,1,n);
    init2(1,1,n);
int m=-1;
    for(int i=1;i<=n;i++){
        int j=i+(d-1);

        int q1=query1(1,1,n,i,j);
        int q2=query2(1,1,n,i,j);
        m=max(m,(q1-q2));
    }
    printf("Case %d: %d\n",++te,m);
    }
}
