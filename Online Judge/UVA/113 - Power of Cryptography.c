#include <stdio.h>
#include <math.h>
int main()
{
   double n,p,p1;
    while(scanf("%lf%lf",&n,&p)!=EOF){
     double (powr)=pow(p,(1.0/n));
    printf("%.0lf\n",powr);
}
return 0;
}
