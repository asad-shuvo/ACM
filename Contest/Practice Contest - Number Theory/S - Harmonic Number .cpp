#include <bits/stdc++.h>
using namespace std;
#define gama 0.57721566490
int main()
{
    long long int test,m=0;
    scanf("%d",&test);
    while(test--){
    double a,b,n,i,sum=0.0;
    //printf("Case %lld: ",++m);
    scanf("%lf",&n);
    if(n<=1000000){
    for(i=1;i<=n;i++){
        sum+=(1.0/i);
    }

   // printf("%.9lf\n",sum);
    }
    else{
        sum = log(n) + gama + (1/(2.0*n)) - (1/(12.0*n*n));
      // printf("%.9lf\n",sum);
    }
    printf("Case %lld: %.9lf\n",++m,sum);
    }
}
