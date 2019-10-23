#include <bits/stdc++.h>
using namespace std;
#define llu  long long int
llu prime(llu a){
    llu p,q,r;
    llu sq=sqrt(a);
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else if(a%2==0)
        return 0;
        else{
            for(p=3;p<=sq;p=p+2){
                if(a%p==0)
                    return 0;
            }
        }
        return 1;
}
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
    llu i,j,k,l,m,n;
    llu N,P,M;
    llu f;
    while(scanf("%lld",&n)&& n>0){
    f=0;
    if(prime(n)){
        printf("%lld is normal.\n",n);
    }
    else{
        for(i=2;i<=n-1;i++){
            N=i;
            P=n;
            M=n;
           m=F(N,P,M);
           if(m!=i)
           {
               f=1;
               break;
           }
        }
            if(f==1)
        printf("%lld is normal.\n",n);
        else
            printf("The number %lld is a Carmichael number.\n",n);
    }

}
}
