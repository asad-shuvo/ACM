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
int arr[Mx],BIT[Mx];
void update(int n,int index,int val)
{
    index++;
    while(index<=n){
        BIT[index]+=val;
        index+=(index)&(-index);
    }
}
void init(int n)
{
    for(int i=0;i<n;i++){
        update(n,i,arr[i]);
    }
}
int getsum(int n,int index)
{
    index++;
    int sum=0;
    while(index>0)
    {
        sum+=BIT[index];
        index-=index & (-index);
    }
    return sum;
}
int main()
{
    int n,i;
    sc1(n);
    F(i,0,n-1)
    sc1(arr[i]);
    init( n);
    int q;
    sc1(q);
    while(q--){
        int x;
        sc1(x);
        if(x==0){
                int plc,val;
        sc2(plc,val);
            update(n,plc,val);
        }
        if(x==1)
        {
            int e;
            sc1(e);
            cout<<getsum(n,e)<<endl;
        }
    }
}

