#include <stdio.h>
int main()
{
    long long int n,N,i,digit,count=0,j,rem;
    scanf("%lld",&n);

        count=0;
    for(i=1;i<=9;i++)
    {
      N=(n*i)/i;
      j=N;
      while(j!=0)
      {
          rem=j%10;
           if(rem==0)
            count++;
          j=j/10;
           // printf("%d\n",rem);
      }
    }
    if(count==1)
printf("%lld / %lld = %lld\n",n*i,i,N);
}

