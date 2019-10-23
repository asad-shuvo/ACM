#include<stdio.h>
int main()
{
    int a,i,check;
    scanf("%d", &a);

    check=1;
    for(i=2;i<a;i++)

    {
    if(a%i==0)
    check=0;
    }

    if(check==1)
    printf(" prime");

    else
    printf("not prime");

    return 0;
}
