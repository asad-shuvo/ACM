#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,s,p,t;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0 || b==0 || c==0)
        {
            break;
        }
        if(a>c)
        {
            t=a;
            a=c;
            c=t;
        }
        if(b>c)
        {
            p=b;
            b=c;
            c=p;
        }
        s=sqrt(a*a+b*b);
        if(s==c)
            printf("right\n");
        else
            printf("wrong\n");
    }
}
