#include<bits/stdc++.h>
using namespace std;
long long int prime(int a)
{
    long long int f=1,p,q,i;
    for(p=2;p<=sqrt(a);p++)
    {
        if(a%p==0){
            f=0;
        }
    }
    return f;
}
int main()
{
    long long int n,m,i,j,k,sum=0,rem,count=0;
    scanf("%lld%lld",&m,&n);
    for(i=m;i<=n;i++)
    {
        k=i;
        if(prime(k))
        {
            //sum=0;
            /*while(k>9)
            {
                rem=k%10;
               // printf("\n%lld",rem);
                sum=sum+rem;
                //printf("\n%lld ",sum);
                k=k/10;
                //printf("\n%lld",k);
            }
            */
           // sum=0;
            while(k!=0)
            {
                sum+=k%10;
                k/=10;
            }
            if(prime(sum))
            {
                printf("\n%lld ",sum);
                count++;
            }

        }

    }
    printf("\n%lld",count);
}
