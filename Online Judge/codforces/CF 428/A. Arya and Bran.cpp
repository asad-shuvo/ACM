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
    int n,k;
    sc2(n,k);
    int sum=0,day=0,candy=0;
    for(int i=0;i<n;i++){
        int a;
        sc1(a);
        sum+=a;
        if(sum>=8){
            sum-=8;
            candy+=8;
            day++;
        }
        else if(sum<8){
                            candy+=sum;
            sum-=sum;
        day++;
        }
        if(candy>=k)break;
    }
    if(candy>=k)pr("%d\n",day);
    if(candy<k)pr("-1\n");
}
