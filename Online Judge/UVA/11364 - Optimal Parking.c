#include <stdio.h>
int main()
{
    int n,i,j,k,sum,test,temp;
    int arr[1000];
    scanf("%d",&test);
    while(test>0){
            sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<i+2;j++)
        {
           sum=sum+(arr[j]-arr[i]);
        }
    }
    printf("%d\n",sum*2);
    test--;
    }
    return 0;
}
