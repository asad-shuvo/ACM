#include<stdio.h>
int main()
{
    freopen("input.txt","rt",stdin);
    long long int i=1,test,tax1,tax2,tax3,tax4,tax,p,n;
    scanf("%lld",&test);
    while(test--)
    {
    scanf("%lld",&n);
    if(n<=180000)
        printf("Case %lld: 0\n",i);
    else if(n>180000 && n<=480000)
    {
        p=n-180000;
        tax=(p*10)/100;
        if(tax<2000)
        {
            tax=2000;
            printf("Case %lld: %lld\n",i,tax);
        }
        else
        {
            if(((p*10)%100)==0)
            printf("Case %lld: %lld\n",i,tax);
            else
                 printf("Case %lld: %lld\n",i,tax+1);

    }
    }
    else if(n>480000 &&  n<=880000)
    {
        tax1=30000;
        p=n-480000;
        tax2=(p*15)/100;
        tax=tax1+tax2;
       printf("Case %lld: %lld\n",i,tax);
    }
    else if(n>880000 && n<=1180000)
    {
        tax1=30000;
        tax2=60000;
        p=n-880000;
        tax3=(p*20)/100;
        tax=tax1+tax2+tax3;
printf("Case %lld: %lld\n",i,tax);
    }
    else if(n>1180000)
    {
        tax1=30000;
        tax2=60000;
        tax3=60000;
        p=n-1180000;
        tax4=(p*25)/100;
        tax=tax1+tax2+tax3+tax4;
        printf("Case %lld: %lld\n",i,tax);
    }
    i++;
    }
return 0;
}
