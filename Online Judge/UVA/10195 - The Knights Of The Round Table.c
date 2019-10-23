#include <stdio.h>
#include <math.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    double p,a,b,c,a_t,a_c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
            if(a==0 && b==0 && c==0)
            printf("The radius of the round table is: 0.000\n");
    else{
        p=(a+b+c)/2;
        a_t=sqrt(p*(p-a)*(p-b)*(p-c));
        a_c=(a_t/p);
        printf("The radius of the round table is: %.3lf\n",a_c);
    }
    }
}
