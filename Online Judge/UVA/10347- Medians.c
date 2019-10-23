#include <stdio.h>
#include<math.h>
int main()
{
    double area,s,m1,m2,m3,area1,area2;
   while(scanf("%lf%lf%lf",&m1,&m2,&m3)==3)
   {
    s=(m1+m2+m3)/2;
    area1=s*(s-m1)*(s-m2)*(s-m3);
    area2=pow(area1,.5);
    area=(4.0*area2)/3.0;

      if(area>0){
    printf("%.3lf\n",area);
}
else
{
    area=-1;
    printf("%.3lf\n",area);
}
}
return 0;
}
