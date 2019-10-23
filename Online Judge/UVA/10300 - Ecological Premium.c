#include <stdio.h>
int main()
{
   double i,j,sp,a,c,f;
   double t,single;
   int t1,n;
   scanf("%d",&t1);
   while(scanf("%d",&n)!=EOF){
        t=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&sp,&a,&c);

    single = sp/a;
        t=t+single*a*c;
    }
    printf("%.0lf\n",t);
}
return 0;
}
