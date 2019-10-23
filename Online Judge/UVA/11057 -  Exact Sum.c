#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    long long int arr[100000],i,j,k=0,l,sum,n,m,temp;
    while(scanf("%lld",&n)!=EOF){
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&m);
    for(i=0;i<n;i++)
    {
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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==m){
                printf("Peter should buy books whose prices are %lld and %lld.\n",arr[i],arr[j]);
                k=1;

        }
        if(k==1)
            break;
        }
    }
    printf("\n");
    }
}
