#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
   double r,n,area,p,p1;
   while(scanf("%lf%lf",&r,&n)!=EOF){
   p=sin((2*pi)/n);
   area=.5*n*r*r*p;
   printf("%.3lf\n",area);
}
return 0;
}
