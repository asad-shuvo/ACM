#include <bits/stdc++.h>
using namespace std;
#define Max 1000010
long long int arr[Max],prime[Max];
void sieve()
{
   long long int i,j;
   for(i=0;i<Max;i++)
   {
       arr[i]=0;
   }
   for(i=4;i<Max;i=i+2)
   {
       arr[i]=1;
   }
   long long int sq=sqrt(Max);
   for(i=3;i<sq;i=i+2)
   {
       if(arr[i]==0)
       {
           for(j=2*i;j<Max;j=j+i)
           {
               arr[j]=1;
           }
       }
   }
   arr[1]=1;
}
int main()
{
    long long int k,rem,m,n,i,j,num,counts=0,test,sum,ans;
    sieve();
    for(i=2;i<=Max;i++)
    {
        if(arr[i]==0)
        {
            sum=0;
            num=i;
            while(num!=0)
            {
                sum=sum+num%10;
                num=num/10;
            }
            if(arr[sum]==0)
            {
                prime[i]=++counts;
            }
            else{
                prime[i]=counts;
            }
        }
        else{
            prime[i]=counts;
        }
        scanf("%lld",&test);
        while(test--)
        {
            scanf("%lld%lld",&m,&n);
            sum=prime[m]-prime[n-1];
            printf("%lld\n",sum);

        }
    }
}
