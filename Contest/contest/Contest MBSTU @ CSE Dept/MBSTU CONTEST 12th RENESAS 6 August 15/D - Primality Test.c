#include<stdio.h>
int main()
{
    int i, j, n, isprime, t;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d", &n);
        isprime=1;
        for(i=2; i<= n/2; i++)
        {
            if((n%i)==0) isprime = 0;
        }
        if(isprime==0 || n==1) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
