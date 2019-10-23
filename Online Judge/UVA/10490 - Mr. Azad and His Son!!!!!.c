#include <stdio.h>
#include<math.h>
long long int prime(int a)
{
    int p,q,f=1;
    for(p=2;p<=a/2;p++)
    {
        if(a%p==0)
            f=0;
    }
    return f;
}
int main()
{
   // freopen("input.txt","rt",stdin);
    long long int i,k,l,m,n,ans;
    while(scanf("%lld",&n)!=EOF){
        if(n==0)
            break;
    if(n==2 || n==3 || n==5 || n==7 || n==13 || n==17 || n==19 || n==31)
    {
        ans=pow(2,n-1)*((pow(2,n))-1);
        printf("Perfect: %lld!\n",ans);
    }
    else if(prime(n))
    {
        printf("Given number is prime. But, NO perfect number is available.\n");
    }
    else
    {
        printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    }
    return 0;
}
