#include<stdio.h>
#include<math.h>
int main()
{
   //freopen("input.txt","rt",stdin);
    long long int i,sq,j,k=0,l,m,p,n,sum,ck,prime[100000];
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
            printf("%lld = ",n);
        for(i=2; i<=n; i++)
        {
            sq=sqrt(i);
            ck=0;
            for(j=2; j<=sq; j++)
            {
                if(i%j==0)
                    ck++;;
            }
            if(ck==0)
            {
                prime[k++]=i;
            }
        }
        p=0;
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                if(prime[i]+prime[j]==n)
                {
                    p=1;
                    printf("%lld + %lld\n",prime[i],prime[j]);
                    break;

                }

            }
            if(p==1)
                break;
        }
    }

}
