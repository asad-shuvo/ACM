#include <stdio.h>
int main()
{
    int arr[100];
    int i,j,k,l,m,n,t,sum,s,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++)
    {
      // sum=0;
        if(arr[i+1]>arr[i])
        {
            t=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=t;

        }
         sum=arr[i]-arr[i+1];
        printf("%d\n",count);
    }
   // printf("%d",sum);
    return 0;
}
