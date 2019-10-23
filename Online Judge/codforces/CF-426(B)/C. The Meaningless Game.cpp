#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1000015
#define inf 1<<28
vector<int>prime;
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
    prime.push_back(2);
    for(int i=3;i<=mx;i+=2){
        if(status[i]==0)prime.push_back(i);
    }

}
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
    int n;
    sieve();
    sc1(n);
    while(n--){
        ll a,b,f1=0,f2=0;
        sc("%lld%lld",&a,&b);
        for(int i=0;;i++){
                if(prime[i]>sqrt(a))break;
            int rem=a/prime[i];
            int ret=sqrt(rem);
            if(ret*ret==rem){f1=1;break;}

        }
        for(int i=0;;i++){
                if(prime[i]>sqrt(b))break;
            int rem=b/prime[i];
            int ret=sqrt(rem);
            if(ret*ret==rem){f2=1;break;}

        }
        if(f1==1 && f2==1)pr("YES\n");
        else pr("NO\n");
    }
}

