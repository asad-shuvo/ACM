#include <stdio.h>
int main()
{
    int arr[100];
    int i,j,k,n,t,sum,chak=1,sum2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
           t=arr[i];
           arr[i]=arr[j];
           arr[j]=t;
        }
    }
    }
    chak=1;
    for(i=0;i<n;i++){
        for(j=i+1;j<i+2;j++)
    {
        if((arr[j]-arr[i])!=1){
            chak=0;
            break;
        }
    }
    }
    if(chak==1)
        printf("jolly");
    else printf("not jolly");


}
