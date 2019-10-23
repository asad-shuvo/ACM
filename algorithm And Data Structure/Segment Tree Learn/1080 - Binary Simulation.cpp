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
int arr[Mx],tree[Mx*4];
    string A;
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=A[b]-'0';
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=0;
}
void update(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)return ;
    if(b>=i && e<=j)
    {
        tree[node]=tree[node]^1;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
}
int query(int node,int b,int e,int i)
{
     if(i>e || i<b){
        return 0;
    }
    if(b==i && e==i){
        return tree[node];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    if(i<=mid){
        return query(left,b,mid,i)^tree[node];
    }
    else
        return query(right,mid+1,e,i)^tree[node];
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
    cin>>A;
    int n=A.size();
    init(1,0,n-1);
    int q;
    sc1(q);
    pr("Case %d:\n",++te);
    while(q--)
    {
        char ch;
        getchar();
        sc("%c",&ch);
        if(ch=='I')
        {
            int x,y;
            sc2(x,y);
            update(1,0,n-1,x-1,y-1);
        }
        if(ch=='Q'){
            int x;
            sc1(x);
            pr("%d\n",query(1,0,n-1,x-1));
        }
    }
}

}
