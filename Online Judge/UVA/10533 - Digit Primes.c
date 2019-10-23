#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,p,m,n,rem,count=0,sum=0,chk,ck;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        chk=1;
        if(i%2==0)
        {
            chk=0;
        }
        else
        {
            for(j=3;j<=sqrt(i);j=j+2)
            {
                if(i%j==0)
                {
                    chk=0;
                }
            }
        }
        if(chk==1)
        {
            printf("%d",i);
            while(i>=10)
            {
                rem=i%10;
                sum=sum+rem;
                i=i/10;
            }
        }
       // printf("%d\n",sum);
        ck=0;
        if(sum%2==0)
        {
            ck=0;
        }
        else
        {
            for(p=3;p<=sqrt(sum);p=p+2)
            {
                if(sum%p==0)
                    ck=0;
            }
        }
        if(ck==1){
            printf("%d",sum);
            count++;
        }


    }
    printf("%d",count);
}
