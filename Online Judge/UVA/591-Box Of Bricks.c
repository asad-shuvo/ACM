#include <stdio.h>
int main()
{
    int arr[100];
    int n,sum,sum1,t=1,sum2,avg,i;
         while(scanf("%d",&n)==1 && n!=0)
         {
    sum=0;
    sum1=0;
    if(n==0)
        break;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>avg){
            sum1=sum1+(arr[i]-avg);
    }
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n",t,sum1);
    t++;
    }
return 0;
}
