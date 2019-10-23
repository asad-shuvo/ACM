#include <stdio.h>
int main()
{
    int arr[10000];
    int i,j,k,l,m,n,t,flag,sum,sum2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<i+2;j++)
        {
            flag=0;
            sum=arr[j]-arr[i];
            if(sum<0)
                sum=sum*-1;
            for(k=j+1;k<j+2;k++)
            {
                sum2=arr[k]-arr[j];
            if(sum2<0)
                sum2=sum2*-1;
                if((sum-sum2)!=1){
                    flag=1;
                    break ;
                }
            }
        }
    }
    if(flag==1)
    {
        printf("not");

    }
    else
        printf("J");

}
