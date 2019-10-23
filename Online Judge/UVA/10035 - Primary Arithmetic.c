#include <stdio.h>
int main()
{
   //freopen("input.txt","rt",stdin);
     long long n,m,i,j,k,rem,rem1,sum,add;
    while(scanf("%lld%lld",&n,&m)!=EOF){
            if(n==0 && m==0)
            break;
    sum=0;
    while(n!=0 && m!=0)
    {
        rem=n%10;
        rem1=m%10;
        }
        add=rem+rem1;
        if(add>9)
        {
            sum++;
            n=n/10;
            m=m/10;
            if(((m+1)%10==0) && ((n+1)%10==0))
            {
                n=n+2;
                m=m-1;
            }
             else if((m+1)%10!=0)
            {
                m=m+1;
            }
            else if((n+1)%10!=0){
                n=n+1;
            }
        }
        else{
            n=n/10;
        m=m/10;
        }

    }
    if(sum==0)
        printf("No carry operation.\n");
        else if(sum==1)
        {
         printf("1 carry operation.\n");
        }
    else{
    printf("%lld carry operations.\n",sum);
}
}
return 0;
}
