#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll F(ll N,ll P,ll M){
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
    ll N,P,m,M;
   // while(scanf("%llu%llu%llu",&N,&P,&M)!=EOF){
   // m=F(N,P,M);
   m=pow(100000,17160773352933361368);
    printf("%llu\n",m);

    }
   // return 0;
//}

