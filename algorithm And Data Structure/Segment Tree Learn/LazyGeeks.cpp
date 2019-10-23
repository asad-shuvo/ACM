#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int arr[Mx];
int lazy[Mx];
int tree[Mx];
void init(int node,int b,int e)
{
    if(b>e)return;
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=(node*2)+1;
    int right=(node*2)+2;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
void update(int node,int b,int e,int i,int j,int value)
{
    if(lazy[node]!=0)
    {
        tree[node]+=(e-b+1)*lazy[node];
        if(b=!e){
            lazy[node*2+1]+=tree[node];
            lazy[node*2+2]+=tree[node];
        }
        lazy[node]=0;
    }
    if(b>e || b>j || e<i )
        return;
    if(b>=i && e<=j)
    {
        tree[node]+=(e-b+1)*value;
            if(b!=e)
    {
        lazy[node*2+1]+=value;
        lazy[node*2+2]+=value;
    }
    return;

    }
    int mid=(b+e)/2;
    int left=(node*2)+1;
    int right=(node*2)+2;
    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(lazy[node]!=0){
        tree[node]+=(e-b+1)*lazy[node];
        if(b!=e)
        {
            tree[node*2+1]+=lazy[node];
            tree[node*2+2]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(b>e || b>j || e<i)
    {
        return 0;
    }
    if(b>=i && e<=j)return tree[node];
    int mid=(b+e)/2;
    int left=(node*2)+1;
    int right=(node*2)+2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
int main()
{
    int i,n,q;
    sc2(n,q);

    F(i,0,n-1)sc1(arr[i]);
    init(0,0,n-1);
    while(q--){
            int x;
    sc1(x);
    if(x==0){
            int q1,q2,v;
    sc3(q1,q2,v);
    update(0,0,n-1,q1,q2,v);
    }
    if(x==1){
            int q1,q2;
    sc2(q1,q2);
    cout<<query(0,0,n-1,q1,q2)<<endl;
    }
    }
}

