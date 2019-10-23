#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>prime;
#define mx 1000010
bool status[mx+10];

void sieve(){
  ll    i,j;
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
    for( i=2;i<=mx;i++){
        if(status[i]==0)prime.push_back(i);
    }
}
ll NOD ( ll n ) {
    ll sqrtn = sqrt ( n );
    ll res = 1;
    for ( ll i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            ll p = 0; // Counter for power of prime
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                p++;
            }
            sqrtn = sqrt ( n );
            p++; // Increase it by one at end
            res *= p; // Multiply with answer
        }
    }
    if ( n != 1 ) {
        res *= 2; // Remaining prime has power p^1. So multiply with 2/
    }
    return res;
}
int main()
{
    sieve();
    int te=0;
    int test;
    scanf("%d",&test);
    while(test--){
    ll n;
    scanf("%lld",&n);
    printf("Case %d: %lld\n",++te,NOD(n)-1);
    }
}
