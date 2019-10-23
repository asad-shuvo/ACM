#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define Mx 200005
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
ll arr[100005];
void convert(ll  n)
{
    ll  temp[n];
    for (ll  i=0; i<n; i++)
        temp[i] = arr[i];
    sort(temp, temp+n);
    for (ll  i=0; i<n; i++)
    {
        arr[i] = lower_bound(temp, temp+n, arr[i]) - temp + 1;
    }
}
ll  getsum(ll  BIT[],ll  index)
{
    ll  sum=0;
    while(index>0){
        sum+=BIT[index];
        index-=index & (-index);
    }
    return sum;
}
void update(ll  BIT[],ll  n,ll  index,ll  val)
{
    while(index<=n){
        BIT[index]+=val;
        index+=index & (-index);
    }
}
ll  inversions(ll  n)
{
    convert(n);
    ll  incovent=0;
        ll  BIT[n+1];
        for(ll  i=1;i<=n;i++)BIT[i]=0;
        for(ll  i=n-1;i>=0;i--){
            incovent+=getsum(BIT,arr[i]-1);
            update(BIT,n,arr[i],1);
        }
        return incovent;
}
int main()
{
    ll  i,n,test;
    while(sc("%lld",&n)&&n>0){
    F(i,0,n-1)sc1(arr[i]);
    int ret=inversions(n);
    if(ret%2==0)
        pr("Carlos\n");
    else
        pr("Marcelo\n");
    }
}

