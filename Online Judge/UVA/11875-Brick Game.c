#include <stdio.h>
int main()
{
    int i,j,k,l,n,t;
    int arr[20];
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        if((arr[n-1]+arr[0])%2==0)
           {
               l=((arr[n-1]+arr[0])/2);
           }
           else
          l=((arr[n-1]+arr[0])/2)+1;

        printf("Case %d: %d\n",j,l);
    }
    return 0;
}
