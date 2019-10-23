#include <stdio.h>
int main()
{
  // freopen("input.txt","rt",stdin);
     unsigned long long n,m,i,j,k,rem,rem1,sum,add,c;
    while(scanf("%llu%llu",&n,&m)==2){
            if(n==0 && m==0)
            break;
            c=0;
    sum=0;
    while(n||m)
    {
        rem=n%10;
        rem1=m%10;
        add=rem+rem1;
        if((add+c)>9)
        {
            sum++;
            c=1;
        }
        else
        {
           c=0;
        }
         n=n/10;
            m=m/10;
    }
    if(sum==0)
        printf("No carry operation.\n");
        else if(sum==1)
        {
         printf("1 carry operation.\n");
        }
    else{
    printf("%llu carry operations.\n",sum);
}
}
return 0;
}

