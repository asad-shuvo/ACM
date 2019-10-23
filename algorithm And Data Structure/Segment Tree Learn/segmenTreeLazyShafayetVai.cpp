#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
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
struct info
{
    int prop,sum;
} tree[Mx*4];
ll n;
void init()
{
    for(int i=0;i<=n*4;i++)
    {
        tree[i].sum=0;
        tree[i].prop=0;
    }
}
void update(int node,int b,int e,int i,int j,int x)
{
    if(i>e || j<b)return ;
    if(b>=i && e<=j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum=tree[right].sum+tree[left].sum+(e-b+1)*tree[node].prop;
}
int query(int node,int b,int e,int i,int j,int carry)
{
    if(i>e || j<b)return 0;
    if(b>=i && e<=j)
    {
        return tree[node].sum+carry*(e-b+1);
    }
    int left=node<<1;
    int right=(node<<1)+1;
    int mid=(b+e)>>1;
    int p1=query(left,b,mid,i,j,carry+tree[node].prop);
    int p1=query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}
int main()
{

}

