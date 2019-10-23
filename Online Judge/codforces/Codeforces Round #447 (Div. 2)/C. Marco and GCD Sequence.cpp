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
int a[1000005],antr[1000006];
int main()
{
    int m,arr[10005];
    sc1(m);
    for(int i=0;i<m;i++){
        sc1(arr[i]);
        a[arr[i]]=1;
        antr[arr[i]]=1;
    }
    int cnt=m;
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=i;j<m+1;j++){
            int ret=__gcd(arr[i],arr[j]);
    if(a[ret]==0)flag=1;
            if(ret!=arr[i] && ret!=arr[j]){
                antr[ret]=100;
                cnt--;
            }
        }
    }
    if(flag==1)
        pr("-1\n");
    else{
    pr("%d\n",cnt);

    for(int i=0;i<=1000006;i++){
        if(antr[i]==1)
            pr("%d ",i);
    }
    pr("\n");
    }
}

