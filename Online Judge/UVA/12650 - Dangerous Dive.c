#include <stdio.h>
int main()
{
    int arr[1000],n,m,i,j,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        //if(arr[i]==0)
            printf("%d ",i);
    }
}
