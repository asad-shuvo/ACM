#include <stdio.h>
int main()
{
    int n,arr[1005],i,count=0,sum,j=1;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
          count++;
        }
    }
    sum=(n-count)-count;
    printf("Case %d: %d\n",j,sum);
    j++;
}
return 0;
}
