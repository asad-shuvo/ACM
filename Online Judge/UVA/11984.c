#include <stdio.h>
int main()
{
     int i,t;
    double f,a,c,d;
    while((scanf("%d",&t))==1)
{
    for(i=1;i<=t;i++){
    scanf("%lf%lf",&c,&d);
    f=9*c/5+d;
    a=f*5/9;
    printf("case %d: %.2lf\n",i,a);
}

}
return 0;
}
