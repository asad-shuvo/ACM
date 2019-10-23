#include <stdio.h>
int main()
{
    freopen("input.txt","rt",stdin);
    long long int a,b,n,k,r,s,t,x,y,p=9;
   while(scanf("%lld",&a)!=EOF)
   {
       b=0;
 x=a;
     while(a) {
        r=a%10;
   b=b*10+r;
    a=a/10;
    }

    y=b;

    if(x<y)
    {
        t=y;
        y=x;
        x=t;
    }

    s=x-y;
    k=s/9;
    printf("%lld - %lld = %lld = %lld * %lld\n",x,y,s,p,k);
}
return 0;
}
