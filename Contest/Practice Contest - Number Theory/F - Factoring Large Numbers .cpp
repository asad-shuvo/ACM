#include <bits/stdc++.h>
using namespace std;
#define mx 10000005
#define ll long long int
bool  status[mx];
vector<int>prime;
void sieve()
{
    long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
     //   prime[i]=0;
    }
   // v.push_back(2);
   // prime[2]=1;
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
           // prime.push_back(i);
            //prime[i]=1;
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
    for(i=2;i<=mx;i++){
        if(status[i]==0)
            prime.push_back(i);
    }

}
int main()
{
    ll n,m=0;
    sieve();
    while(scanf("%lld",&n)!=EOF){
            m++;
    if(m>1)
        printf("\n");
            if(n<0)
            break;
    int f=0;
    for(ll i=0;i<prime.size() && prime[i]<=(n/2);i++){
        ll t=prime[i];
        while(n%t==0){
                f=1;
            printf("    %lld\n",t);
            n=n/t;
        }
    }
    printf("    %lld\n",n);
    }
}
