#include <stdio.h>
#include<math.h>
int main()
{
    double n,u,v,t,a,s,v1,u1;
    int i=1;
   while(scanf("%lf",&n)){
        if(n==0)
        break;
    if(n==1)
    {
        scanf("%lf%lf%lf",&u,&v,&t);
        ///v=u+a*t;
        a=(v-u)/t;
        s=u*t+.5*a*t*t;
        printf("Case %d: %.3lf %.3lf\n",i,s,a);
    }
    if(n==2)
    {
        scanf("%lf%lf%lf",&u,&v,&a);
        t=(v-u)/a;
        s=u*t+.5*a*t*t;
         printf("Case %d: %.3lf %.3lf\n",i,s,t);
    }
    if(n==3)
    {
       scanf("%lf%lf%lf",&u,&a,&s);
       v1=u*u+2*a*s;
       v=pow(v1,.5);
       t=(v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",i,v,t);
    }
     if(n==4)
     {
       scanf("%lf%lf%lf",&v,&a,&s);
       u1=v*v-2*a*s;
       u=pow(u1,.5);
         t=(v-u)/a;
         printf("Case %d: %.3lf %.3lf\n",i,u,t);
     }
     i++;
}
return 0;
}
