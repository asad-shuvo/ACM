#include <stdio.h>
int main()
{
    int i,j,d,t;
    scanf("%d%d",&i,&j);
    if(j>i)
    {
       t=j;
       j=i;
       i=t;
    }
    d=i-j;
    printf("%d",d);
}
