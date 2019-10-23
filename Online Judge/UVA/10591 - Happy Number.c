#include <stdio.h>
int main()
{
    int p,n,m,sum=0,rem;
    scanf("%d",&p);
    n=p;
    while(1){
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem);
        printf("%d\n",sum);
        n=n/10;
        printf("\n%d\n",n);

    }
    if(sum<10)
        break;
    else
{
        sum=n;
}
    }
       // printf("\n%d\n",n);

        if(sum==1)
            printf("Happy Number");
        else
            printf("Unhappy Number");
}
