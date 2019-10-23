#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j=0,sum,test;
    scanf("%lld",&test);
    while(test--){
        j++;
            sum=0;
    scanf("%lld",&n);
    while(n>0){
        if(n%2==1)
            sum++;
        n=n/2;
    }
    if(sum%2==0)
        printf("Case %lld: even\n",j);
        else
    printf("Case %d: odd\n",j);
    }
    return 0;
}
