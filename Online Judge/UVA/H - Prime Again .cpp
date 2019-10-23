#include <bits/stdc++.h>
using namespace std;
#define mx 66666
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
int isprime(ll a){
    for(ll i=0;i<prime.size() && prime[i]<=sqrt(a);i++){
        if(a%prime[i]==0)
            return 0;
    }
    return 1;
}
int main()
{
    ll n;
    sieve();
    ll test;
    scanf("%lld",&test);
    while(test--){
    scanf("%lld",&n);
    for(ll i=n-1; ;i--){
        if(isprime(i)==1){
            printf("%lld\n",i);
            break;
        }
    }
    }
}
