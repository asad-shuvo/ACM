#include <stdio.h>
int main()
{
    int a,b,gcd,lcm,t,n,sum,i,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++){
                b=j;
        a=i;
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    sum=sum+gcd;
}
        }
        printf("%d\n",sum);
    }
    return 0;
}


