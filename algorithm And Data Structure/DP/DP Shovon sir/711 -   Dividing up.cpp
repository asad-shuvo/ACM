#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
int dp[20001][12000],total,dif;
//vector<int>v;
int v[20001],k;
void fun(int i,int sum)
{
    if(i==v.size())return ;
   if(dp[i][sum]!=-1){dp[i][sum]=min(dif,dp[i][sum]);return;}
   int t=abs(total-sum);
   t=abs(sum-t);
   dif=min(t,dif);
   fun(i+1,sum+v[i]);
   fun(i+1,sum);
    dp[i][total]=dif;
}
int main()
{
    int arr[10];
    int cnt,tem=0,te=0;
    while(sc1(arr[1])){
            cnt=0;
            if(arr[1]==0)cnt++;
    for(int i=2;i<=6;i++){
sc1(arr[i]);
//v.clear();
    dif=INT_MAX;

if(arr[i]==0)cnt++;
}
if(cnt==6)break;
tem++;
if(tem>1)cout<<endl;
    mem(dp,-1);
    total=0;

    for(int i=1;i<=arr[1];i++){
        v.p_b(1);
        total+=1;
    } for(int i=1;i<=arr[2];i++){
        v.p_b(2);
        total+=2;
    } for(int i=1;i<=arr[3];i++){
        v.p_b(3);
        total+=3;
    } for(int i=1;i<=arr[4];i++){
        v.p_b(4);
        total+=4;
    } for(int i=1;i<=arr[5];i++){
        v.p_b(5);
        total+=5;
    } for(int i=1;i<=arr[6];i++){
        v.p_b(6);
        total+=6;
    }
    fun(0,0);
    if(dif==0){
        pr("Collection #%d:\n",++te);
pr("Can be divided.\n");
}
else{
    pr("Collection #%d:\n",++te);
pr("Can't be divided.\n");
}
//    cout<<fun(0,0)<<endl;
}
}

