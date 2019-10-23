#include <stdio.h>
#include<math.h>
int main()
{
    int x,y,r,test;
    double max,min,sq;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d%d",&x,&y,&r);
    sq=sqrt(x*x+y*y);
    max=r+sq;
    min=r-sq;
    printf("%.2lf %.2lf\n",min,max);
    }
}
