#include <bits/stdc++.h>
using namespace std;
long long int prime(int a){
    int p,q,sq;
    sq=sqrt(a);
    if(a==1)
        return 0;
    if(a==2)
        return 1;
    if(a%2==0)
        return 0;
    for(p=3;p<=sq;p=p+2){
        if(a%p==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int n,rem,rev,k;
    while(scanf("%lld",&n)!=EOF){
        k=n;
        rev=0;
            while(k>0){
                rem=k%10;
                rev=rev*10+rem;
                k=k/10;
            }

    printf("%lld\n",2*n);
     if(prime(n)==1 && rev==n){
                break;
            }
    }
    return 0;
}
