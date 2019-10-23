#include <stdio.h>
int main()
{
   long int i,j,s,p,n,count;
   printf("PERFECTION OUTPUT\n");
   while(scanf("%ld",&n)==1)
    {
    if(n==0)
            {
            printf("END OF OUTPUT\n");
            break;
            }
    else
        {
        count=0;
        for(i=1;i<n;i++)
           {
        if(n%i==0)
            count+=i;
            }

        if(count==n)
                printf("%5ld  PERFECT\n",n);
                else if(count>n)
                    printf("%5ld  ABUNDANT\n",n);
                else if(count<n)
                    printf("%5ld  DEFICIENT\n",n);
        }

    }

}
