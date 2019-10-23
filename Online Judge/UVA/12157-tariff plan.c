#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,sum;
    int arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++){
        sum=0;
        if((arr[i]+1)%30==0)
        {
            l=(arr[i]+1)/30;
            k=l*10;
        }
        else
        {
            l=(arr[i]+1)/30;
            k=(l+1)*10;
        }
         sum=sum+k;
    }
    printf("%d",sum);

}
