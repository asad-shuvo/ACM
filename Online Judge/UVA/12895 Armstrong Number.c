#include <stdio.h>
#include <math.h>
int main()
{
   long long  int n,count,j,rem,count1,digit,rem1,k;
   int t;
    double sum;
    scanf("%d",&t);
    while(t>0){
        scanf("%lld",&n);
            count=0;
    count1=0;
    sum=0;
    k=n;
while(k!=0)
{
    k=k/10;
    count1++;
}
    j=n;
    while(j!=0)
    {
     sum=sum+pow((j%10),count1);
     j=j/10;
    }
    if(sum==n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
        t--;
    }
    return 0;
}

