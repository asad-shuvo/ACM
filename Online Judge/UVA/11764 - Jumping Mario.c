#include <stdio.h>
int main()
{
    int n,arr[100],i,j,count=0,sum=0,test,k=1;
    scanf("%d",&test);
    while(test>0){
            sum=0;
    count=0;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<=i+1;j++)
        {
            if(arr[i]<arr[j])
            {
                count++;
            }
            else if(arr[i]>arr[j])
            {
                sum++;
            }
        }
    }
    printf("Case %d: %d %d\n",k,count,sum);
    test--;
    k++;
}
return 0;
}
