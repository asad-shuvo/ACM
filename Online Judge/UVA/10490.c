#include <stdio.h>
#include<math.h>
long long int prime(int a)
{
    int p,q,f=1;
    if(a==1)
        return 0;
    if(a==2)
        return 1;
    if(a%2==0)
        return 0;
    for(p=3;p<=sqrt(a);p=p+2)
    {
        if(a%p==0)
            return 0;
    }
    return 1;
}
int main()
{
   // freopen("input.txt","rt",stdin);
    long long int i,k,l,m,n,ans,po;
    while(scanf("%lld",&n)!=EOF){
        if(n==0)
        break;
            //if(n==31)
          // printf("Perfect: 2305843008139952128!\n");
       //else{
    po=pow(2,n)-1;
    if(prime(n)==1 && prime(po)==1)
    {
        ans=pow(2,n-1)*((pow(2,n))-1);
        printf("Perfect: %lld!\n",ans);
    }
    else if(prime(n)==1)
    {
        printf("Given number is prime. But, NO perfect number is available.\n");
    }
    else
    {
        printf("Given number is NOT prime! NO perfect number is available.\n");
    }
   // }
    }
    return 0;
}
