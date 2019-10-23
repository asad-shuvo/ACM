#include <stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    long long int a,b,c,n,i,j;
    while(scanf("%lld",&n)){
            if(n==0)
            break;
    a=1;
    b=1;
    c=0;
    for(i=1;i<=n;i++)
    {
       c=a+b;
       a=b;
       b=c;
    }
    printf("%lld\n",a);
    }

}
