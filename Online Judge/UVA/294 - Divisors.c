#include <stdio.h>
#include<math.h>
int main()
{
    freopen("input.txt","rt",stdin);
    long long int i,j,k,l,m,max,count,pos,n,test,sq;
    scanf("%lld",&test);
    while(test--)
    {
        max=0;
    scanf("%lld%lld",&m,&n);
    for(i=m;i<=n;i++)
    {
        k=i;
        sq=sqrt(k);
        count=0;
        if(sq*sq==k)
            count=count-1;
        if(k%2==1){
        for(j=1;j<=sq;j=j+2)
        {
            if(k%j==0)
                count=count+2;

        }
        }
        else
        {
            for(j=1;j<=sq;j++)
            {
                if(k%j==0)
                    count=count+2;
            }
        }
        if(count>max)
        {

            max=count;
            pos=k;
        }
    }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors\n",m,n,pos,max);
}
}
