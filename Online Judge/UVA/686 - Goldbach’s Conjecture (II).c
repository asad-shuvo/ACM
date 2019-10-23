#include <stdio.h>
#include <math.h>
long long int prime(int a)
{
    int p,q,f=1;
    for(p=2;p<=sqrt(a);p++)
    {
        if(a%p==0)
            f=0;
    }
    return f;
}
int main()
{
    long long int i,j,k,l,m,n,count;
    while(scanf("%lld",&n)){
            if(n==4)
            printf("1\n");
    else{
            count=0;
            if(n==0)
                break;
    i=3;
    //j=n-i;
    while(i<n)
    {

        j=n-i;
        if(j==1)
            break;
        if(prime(i) && prime(j))
        {
            if(i==j){
            count++;
            }
            count++;
        }
        i=i+2;
    }
    printf("%lld\n",count/2);
    }
    }
}
