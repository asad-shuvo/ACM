#include <bits/stdc++.h>
using namespace std;
#define mx 10000005
bool  status[mx];
vector<int>prime;
void sieve()
{
int i, j, sqrtN;
for( i = 2; i <= mx; i++ ) status[i] = 0;
sqrtN = int( sqrt((double) mx )); // have to check primes up to (sqrt(N))
for( i = 3; i <= sqrtN; i += 2 ) {
if( status[i] == 0 ) {
// so, i is a prime, so, discard all the multiples
// j = i * i, because it’s the first number to be colored
for( j = i * i; j <= mx; j += i + i )
status[j] = 1; // status of the multiple is 1
}
}
// print the primes
prime.push_back(2);
for( i = 3; i <= mx; i += 2 ) {
if( status[i] == 0 ) prime.push_back(i);
}

}
int main()
{
    sieve();
    long long int  test,m=0;
    long long int  n;
    scanf("%lld",&test);
    while(test--){
    scanf("%lld",&n);
    long long int  i,j;

    long long int  cnt=0;
    for(i=0;i<prime.size() && prime[i]<=n/2 ;i++){
        int sum=n-prime[i];
        if(status[sum]==0)
            cnt++;
    }
    printf("Case %lld: %lld\n",++m,cnt);
}
}


