#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    double c,d;
	scanf("%d%d%lf%lf",&a,&b,&c,&d);
	int t;
	if(a>=b)t=a-b;
	else t=b-a;
	printf("%d %d\n",a+b,t);
	double tmp;
	if(c>=d){
        tmp=c-d;
	}
	else tmp=d-c;
	printf("%.1lf %.1lf",c+d,tmp);
}
