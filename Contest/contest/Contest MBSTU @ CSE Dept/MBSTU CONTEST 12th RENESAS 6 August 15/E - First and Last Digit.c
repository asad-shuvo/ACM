#include<stdio.h>
int main()
{
    int first, i, n, second, sum=0, a, test;
    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
    scanf("%d", &n);
    first = n%10;
    while(n!=0)
    {
        a = n %10;
        n = n / 10;
    }
    second = a;
    sum = first + second;
    printf("%d\n", sum);
    }
    return 0;
}
