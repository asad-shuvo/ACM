#include <stdio.h>
#include <math.h>
#define pi  3.141592653589793
int main()
{
    double a,b,c;
    double a_t,a_b,a_s,p,sunflower,rose,voilet,r,r_in;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
    p=(a+b+c)/2;
    a_t=sqrt(p*(p-a)*(p-b)*(p-c));
    r_in=(a*b*c)/(4*a_t);
    a_b=pi*pow(r_in,2);
    sunflower=(a_b-a_t);
    r=(a_t)/p;
    rose=pi*pow(r,2);
    voilet=a_t-rose;
    printf("%.4lf %.4lf %.4lf\n",sunflower,voilet,rose);
    }
    return 0;
}
