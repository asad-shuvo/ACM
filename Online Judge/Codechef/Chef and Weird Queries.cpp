#include <bits/stdc++.h>
using namespace std;
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
    ll test;
    sc("%lld",&test);
    while(test--){
        ll Y;
        sc("%lld",&Y);
        ll SQT=sqrt(Y);
       if(SQT*SQT==Y)
            SQT--;
        //cout<<SQT<<endl;
        ll sum=0,sq,flag=0;
        for(sq=1;sq<=SQT;sq++){
            ll S=Y-(sq*sq);
            if(S>=700){
                sum+=700;
                flag=1;
                break;
                }
            else sum+=S;
        }
        if(flag==1){
        ll T=SQT-(sq);
      //  cout<<T<<endl;
        T=T*700;
        pr("%lld\n",sum+T);
        }
        else
            pr("%lld\n",sum);
    }
}
