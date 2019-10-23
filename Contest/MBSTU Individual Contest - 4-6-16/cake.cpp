#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,t=0,l,m,n,test;
    scanf("%lld",&test);
    while(test--){
            t++;
    scanf("%lld",&n);
    i=2;
    while(i<n){
        j=n/2;
        for(k=j;k>=1;k--){
        if(k%2==1){
            if(i*k==n){
                printf("Case %lld: %lld %lld\n",t,k,i);
                break;
            }
        }
        }
        i=i+2;
    }
    if(i>n)
        printf("Case %lld: Impossible\n",t);
    }
    return 0;
}
