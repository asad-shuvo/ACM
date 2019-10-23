
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
int tree[Mx*3],arr[Mx];
void init(int node,int b,int e)
{
    if(b==e)
    {
       tree[node]=arr[b];
       return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=tree[right]+tree[left];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i){
            if(newvalue==0)
        tree[node]=newvalue;
    else
        tree[node]+=newvalue;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    int i,n,q,test,te=0;
    sc1(test);
    while(test--){
    sc2(n,q);
    F(i,1,n)
    {
        sc1(arr[i]);
    }
            pr("Case %d:\n",++te);
    init(1,1,n);
    while(q--){
            int option;
            sc1(option);
    if(option==1){
        int y;
        sc1(y);
        pr("%d\n",arr[y+1]);
        arr[y+1]=0;
        update(1,1,n,y+1,0);
    }
    if(option==2){
                int x,y;
                sc2(x,y);
                arr[x+1]+=y;
update(1,1,n,x+1,y);
    }
    if(option==3){
        int x,y;
        sc2(x,y);
        pr("%d\n",query(1,1,n,x+1,y+1));
    }
    }
}
}

