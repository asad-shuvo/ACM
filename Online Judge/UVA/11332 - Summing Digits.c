#include <stdio.h>
int main()
{
    unsigned long long n,sum=0,rem;
    scanf("%llu",&n);
while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        if(sum>10)
        {
            n=sum;
        }
}

 printf("%llu",sum);
}
