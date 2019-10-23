#include <bits/stdc++.h>
using namespace std;
long long int F(long long int N,long long int P,long long int M){
    if(P==0)
        return 1;
    else if(P%2==0){
        return (F(N,P/2,M)*F(N,P/2,M))%M;
    }
    else
        return ((N%M)*(F(N,P-1,M)))%M;
}
int main()
{
    long long int N,P,m,M;
    while(scanf("%lld%lld%lld",&N,&P,&M)!=EOF){
    m=F(N,P,M);
    printf("%lld\n",m);
    }
    return 0;
}
