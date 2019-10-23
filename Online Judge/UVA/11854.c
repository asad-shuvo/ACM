#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,l,k,m;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF)
    {
        k=a*a+b*b;
        l=b*b+c*c;
        m=c*c+a*a;
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        if(k=l+m)
            printf("right\n");
      else  if(l=k+m)
             printf("right\n");
        else if(m=l+k)
             printf("right\n");
        else
            printf("wrong\n");
    }
}
