#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
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
ll divison(ll i)
{
        ll k=i;
        ll sq=sqrt(k);
        ll cnt=0;
        if(k%2==1){
        for(ll j=1;j<=sq;j=j+2)
        {
            if(k%j==0)
                cnt=cnt+2;

        }
        }
        else
        {
            for( ll j=1;j<=sq;j++)
            {
                if(k%j==0)
                    cnt=cnt+2;
            }
        }
         if(sq*sq==k)
            cnt=cnt-1;
        return cnt;
}
int main()
{
    //FILE

    ll test,a,b;
    sc("%lld",&test);
    while(test--){
                ll M=-1,pls;
            sc("%lld%lld",&a,&b);
        for(ll i=a;i<=b;i++){
                ll T=divison(i);
        if(T>M){
                pls=i;
            M=T;
        }
           // M=max(M,T);
        }
            pr("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,pls,M);

    }

}

