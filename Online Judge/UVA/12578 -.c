#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
    double w,a_r,a_c,a_g,r,l;
    int t;
    scanf("%d",&t);
    while(t>0){
    scanf("%lf",&l);
    r=l/5;
    a_c=pi*r*r;
    w=(l*6)/10;
    a_r=w*l;
    a_g=a_r-a_c;
    printf("%.2lf %.2lf\n",a_c,a_g);
    t--;
    }
    return 0;
}
