#include <bits/stdc++.h>
using namespace std;
long long int prime(long long int a){
    long long int p,q,sq;
    sq=sqrt(a);
    if(a==1)
        return 0;
        else if(a==2)
            return 1;
        else if(a%2==0)
            return 0;
        else
        {
            for(p=3;p<=sq;p=p+2){
                if(a%p==0)
                    return 0;
            }
        }
        return 1;
}
int main()
{
    long long int i,j,k,l,m,n;
    while(scanf("%lld",&n)!=EOF && n>0){
    printf("%lld:\n",n);
    i=2;
    while(i<n){
            j=n-i;
        if(prime(i)==1 && prime(j)==1){
                printf("%lld+%lld\n",i,j);
                break;
            }
      i++;
    }
    if(i>j)
        printf("NO WAY!\n");
    }
    return 0;
}
