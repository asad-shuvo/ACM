#include <stdio.h>
#include<math.h>
int main()
{
   unsigned long long  n,sum,cube;;
   while(scanf("%llu",&n)!=EOF)
   {
    sum=(n*n*(n+1)*(n+1))/4;
    printf("%llu\n",sum);
}
return 0;
}
