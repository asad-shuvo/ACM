#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,p,k,l,m,n,sum;
    while(scanf("%lld%lld",&m,&n)!=EOF){
            sum=0;
    sum=sum+m;
        p=m;
    while(1){
            if(sum>=n)
            break;
        sum=sum+(p+1);
    p++;
    }
    printf("%lld\n",p);
    }
    return 0;
}
