#include <stdio.h>
int main()
{
    long int a,b,s,t;
    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        if(b>a)
            {
            t=b;
            b=a;
            a=t;
            }

                s=a-b;

              printf("%ld\n",s);
   }
    }

