#include <stdio.h>
int main()
{
    long long int n,sum,j,t,rem;
    while(scanf("%lld",&n)){
            if(n==0)
            break;
    j=n;
    while(1){
        sum=0;
        while(j>0)
        {
            rem=j%10;
            sum=sum+rem;
            j=j/10;
        }
        if(sum<10)
            break;
        else{
            n=sum;
            j=sum;
        }

    }
    printf("%lld\n",sum);
}
return 0;
}
