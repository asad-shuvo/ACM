#include<stdio.h>
int main()
{
    int a, n, test,i,sum;
    scanf("%d",&test);
    for(i=1; i<=test;i++){
            sum=0;
    scanf("%d", &n);

    while(n!=0)
    {
        a = n % 10;
        sum=a+a*10;
        n = n/10;
    }
    printf("%d\n",);
    }
    return 0;
}
