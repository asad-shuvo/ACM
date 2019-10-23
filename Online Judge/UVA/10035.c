#include <stdio.h>
int main()
{
   // freopen("input.txt","rt",stdin);
    unsigned long long n,m,i,j,k,rem,rem1,sum,add;
    while(scanf("%llu%llu",&n,&m)!=EOF){
            if(n==0 && m==0)
            break;
    sum=0;
    while(n!=0 && m!=0)
    {
        //sum=0;
        rem=n%10;
        printf("%d\n",rem);
        rem1=m%10;
       printf("%d\n",rem1);
        add=rem+rem1;
        printf("%d\n",add);
        if(add>9)
        {
            sum++;
            printf("%d\n",sum);
            n=n/10;
            printf("%d\n",n);
            m=m/10;
            printf("%d\n",m);
            if(((m+1)%10==0) && ((n+1)%10==0))
            {
                n=n+2;
                 printf("%d\n",n);
                m=m-1;
                 printf("%d\n",m);
            }
            else if(m%10!=0)
            {
                m=m+1;
                printf("%d\n",m);
            }
            else if(n%10!=0){
                n=n+1;
                printf("%d\n",n);
            }
        }
        else{
            n=n/10;
            printf("\n%d\n",n);
        m=m/10;
        printf("\n%d\n",m);
        }

    }
    if(sum==0)
        printf("No carry operation.\n");
    else{
    printf("%llu carry operation.\n",sum);
}
}
return 0;
}

