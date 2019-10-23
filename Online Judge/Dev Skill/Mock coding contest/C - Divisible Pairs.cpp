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
int main()
{
    int n,test;
    //int    t=1000000000;
    //pr("%d",t);

    sc1(test);
    while(test--){
    sc1(n);
        int arr[10]={0};
    for(int i=0;i<n;i++){
        int v;
        sc1(v);
        v=v%6;
        arr[v]++;
    }
    int t0=arr[0];
    int t1=arr[1];
    int t2=arr[2];
    int t3=arr[3];
    int t4=arr[4];
    int t5=arr[5];
    ll s1=0;

    int temp=arr[0];
    s1+=(((temp-1)*temp)/2);
    temp=arr[3];
    s1+=(((temp-1)*temp)/2);
    s1+=(t2*t4);
    s1+=(t5*t1);
    pr("%lld\n",s1);
    }
}

