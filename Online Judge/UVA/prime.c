#include<stdio.h>
#include <math.h>

int main()

{
   long long int i,j,n,k=1;
   scanf("%lld",&n);
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
        k=0;
   }
    if(k==1)
        printf("Prime");
        else
            printf("no");
}
