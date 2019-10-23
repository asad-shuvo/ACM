#include <bits/stdc++.h>
using namespace std;
#define mx 10000005
bool  status[mx];
vector<int>prime;
void sieve()
{
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
    for(i=2;i<=mx;i++){
        if(status[i]==0)
            prime.push_back(i);
    }

}
int main()
{
    sieve();
    long long int  test,m=0;
    long long int  n;
    while(scanf("%lld",&n)!=EOF && n>0){
    long long int  i,j;

    long long int  cnt=0;
    for(i=0;i<prime.size() && prime[i]<=n/2 ;i++){
        int sum=n-prime[i];
        if(status[sum]==0)
            cnt++;
    }
    printf("%lld\n",cnt);
}
}


