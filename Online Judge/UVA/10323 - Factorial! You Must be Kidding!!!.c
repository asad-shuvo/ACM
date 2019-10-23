#include <stdio.h>
int main()
{
    long long int n,i,fact;
    while(scanf("%lld",&n)!=EOF){
            fact=1;
        if(n<0&&n%2==0){
        printf("Underflow!\n");
        }
            else if(n<0 && n%2!=0)
             {
                printf("Overflow!\n");
             }
         else if(n<8 || n==0)
         {
             printf("Underflow!\n");
         }
         else if(n>=8 && n<=13)
         {
             for(i=1;i<=n;i++)
             {
                 fact=fact*i;
             }
             printf("%lld\n",fact);
         }
           else if(n>13)
            printf("Overflow!\n");
         }
return 0;
}
