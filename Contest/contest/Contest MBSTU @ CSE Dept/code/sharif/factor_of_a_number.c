#include<stdio.h>
int main()
{
    int num,i;
    printf("enter number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("factor=%d\n",i);


    }
    return 0;
}
