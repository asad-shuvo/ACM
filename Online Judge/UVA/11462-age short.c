#include <stdio.h>
int main()
{
     long int arr[2000005],i,n,j,t;

    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0){
            break;
        }
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    if(arr[i]>arr[j])
    {
        //arr[i]=t;
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
}
    }
     for(i=0;i<n;i++)
        printf("%ld",arr[i]);
}
return 0;
}
