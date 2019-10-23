#include <stdio.h>
int main()
{
    int arr[100],i,n,j,temp,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       // sum=0;
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
               // sum=0;
                if(arr[j]>arr[i])
          temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
            //sum=sum+(arr[i]-arr[j]);
         }
     }
     for(i=0;i<n;i++){
         for(j=i+1;j<=i+1;j++){
                sum=sum+(arr[j]-arr[i]);
         }
     }

    printf("%d\n",sum);
    return 0;
}
