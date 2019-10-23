#include <stdio.h>
#include<stdlib.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    int arr[100000];
    int min,i,j,k,n,t,test,sum;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
               if(arr[i]>arr[j])
               {
                   t=arr[i];
                   arr[i]=arr[j];
                   arr[j]=t;
               }
            }

    }
     //for(i=0;i<n;i++){
        //printf("\n%d  ",arr[i]);
     //}
    for(i=1;i<=n;i++){
            sum=0;
            for(j=1;j<=n;j++){
        sum+=abs(arr[j]-arr[i]);
       // printf("\n\n%d\n",sum);

    }
    if(i==1)
        min=sum;
        if(sum<min)
            min=sum;
    }
    printf("%d\n",min);

    }
}
