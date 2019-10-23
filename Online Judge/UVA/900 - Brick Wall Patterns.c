#include <stdio.h>
int main()
{
    long long int a,b,c,n,i;
    while(scanf("%lld",&n)!=EOF){
            if(n==0)
            break;
    a=1;
    b=1;
    c=0;
  // n=55;
    for(i=1;i<=n;i++)
    {

      c=a+b;
      a=b;
      b=c;

    }
    printf("%lld\n",a);
    }
    return 0;
}
