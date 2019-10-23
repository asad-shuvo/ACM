#include<stdio.h>
void inc(int *p)
{
    *p=*p+1;
}
int main()
{
    int a=10;
    inc(&a);
    printf("%d\n",a);
}
