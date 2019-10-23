#include <stdio.h>
int main()
{
    float length,width,dept,w,sum;
    int test,count=0,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
    scanf("%f%f%f%f",&length,&width,&dept,&w);
    if(length+width+dept<=125 && w<=7 || length<=56 && width<=45 && dept<=25 && w<=7){
        printf("1\n");
         count++;
    }
    else
    {
        printf("0\n");
    }
}
printf("%d\n",count);
return 0;
}
